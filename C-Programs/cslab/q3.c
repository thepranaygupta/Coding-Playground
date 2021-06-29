//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>

int main()
{
    int n, a;
    double sum = 0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the Value of a: ");
    scanf("%d", &a);
    for (int i = 0; i <= n; i++)
    {
        sum += i / (pow(a, i));
    }
    printf("The Sum = %lf", sum);
    return 0;
}