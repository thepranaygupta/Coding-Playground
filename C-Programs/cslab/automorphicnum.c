//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, flag = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int num = n, sq = n * n;
    while (n > 0)
    {
        if (n % 10 != sq % 10)
            flag = 1;
        n /= 10;
        sq /= 10;
    }
    if (flag == 0)
        printf("%d is an Automorphic Number", num);
    else
        printf("%d is not an Automorphic Number", num);
    return 0;
}