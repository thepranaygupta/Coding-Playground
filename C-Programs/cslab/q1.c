//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double sum = 0.0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (double i = 1; i <= n; i++)
    {
        sum += 1 / pow(i, i);
    }
    printf("Sum is = %lf", sum);
    return 0;
}