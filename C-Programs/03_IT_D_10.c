//03_PRANAY GUPTA
#include <stdio.h>
int isPrime(int n)
{
    int count = 0;
    if (n == 1)
        return 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, j = 1, sum = 0;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The series is = ");
    for (int i = 0; i < n; i++)
    {
        for (; j <= n + i; j++)
        {
            if (isPrime(j))
            {
                printf("%d + ", j);
                sum += j;
            }
        }
    }
    printf("\nThe Sum = %d", sum);
    return 0;
}