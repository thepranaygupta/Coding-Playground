//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>
//#include <string.h>

int main()
{
    int n, x, temp = 0, fact;
    double sum;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the Value of x: ");
    scanf("%d", &x);
    printf("S = ");
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = temp; j > 0; j--)
        {
            fact *= j;
        }
        
        if (i % 2 == 1)
        {
            printf("%d/%d - ", (int)pow(x, temp), fact);
            sum += pow(x, temp) / fact;
        }
        else
        {
            printf("%d/%d + ", (int)pow(x, temp), fact);
            sum -= pow(x, temp) / fact;
        }
        temp += 2;
    }
    printf(" = %lf", sum);
    return 0;
}