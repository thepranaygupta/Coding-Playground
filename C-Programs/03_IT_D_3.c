//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>
int main()
{
    int n, nod = 0, sod = 0, reverse = 0;
    double aval=0.0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i = n; i > 0; i/=10)
    {
        nod++;
        sod += i%10;
        reverse = (reverse*10)+(i%10);
    }

    printf("\nTotal No. digits : %d", nod);
    printf("\nSum of all digits : %d", sod);
    printf("\nReverse of %d is : %d", n, reverse);

    if(n == reverse)
        printf("\n%d is a Palindrome Number", n);
    else
        printf("\n%d is not a Palindrome Number", n);

    for(int i = n; i > 0; i /= 10)
    {
        // aval += floor(pow(i%10, nod)); // if aval is int type
        aval += (pow(i%10, nod));         // if aval is double type

    }
    if (aval == n)
        printf("\n%d is an Armstrong Number", n);
    else
        printf("\n%d is not an Armstrong Number", n);

    return 0;
}
