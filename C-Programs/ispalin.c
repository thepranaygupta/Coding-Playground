//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i = n; i > 0; i/=10)
    {
        reverse = (reverse*10)+(i%10);
    }
    printf("\nReverse of %d is : %d", n, reverse);

    if(n == reverse)
        printf("\n%d is a Palindrome Number", n);
    else
        printf("\n%d is not a Palindrome Number", n);

    return 0;
}