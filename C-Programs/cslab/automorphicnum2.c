//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
#include <math.h>

int main()
{
    int n, flag = 0, digitcount = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int num = n, sq = n * n;
    while (n > 0)
    {
        digitcount++;
        n = n / 10;
    }

    int end = sq % (int)floor(pow(10, digitcount));
    if (end == num)
        printf("%d is an Automorphic Number", num);
    else
        printf("%d is not an Automorphic Number", num);

    return 0;
}