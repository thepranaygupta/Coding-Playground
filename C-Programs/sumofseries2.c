// X^2/2! - X^4/4! + X^6/6! - X^8/8! + ..... till N terms
#include <stdio.h>
#include <math.h>
int main()
{
    int n, x;
    double sum = 1.0;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("The series is : 1 - ");
    for (int i = 1; i <= n; i++)
    {
        int f = 1;
        for (int j = 1; j <= i * 2; j++)
            f = f * j;

        if (i % 2 == 0)
        {
            printf("%d^%d/%d! - ", x, i * 2, i * 2);
            sum += (pow(x, i * 2)) / (double)f;
        }
        else
        {
            printf("%d^%d/%d! + ", x, i * 2, i * 2);
            sum -= (pow(x, i * 2)) / (double)f;
        }
    }
    printf("\b\b= %lf", sum);
    return 0;
}