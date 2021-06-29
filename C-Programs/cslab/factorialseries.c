//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, fact;
    double sum;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("S = ");
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += i / (double)fact;

        if (i != n)
            printf("%d/%d + ", i, fact);
        else
            printf("%d/%d = ", i, fact);
    }
    printf("%lf", sum);
    return 0;
}