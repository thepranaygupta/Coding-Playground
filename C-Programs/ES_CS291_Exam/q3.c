//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("All Factors of %d are = ", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("[%d]", i);

    printf("\nPrime Factors of %d are = ", n);
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    count++;
            }
            if (count == 2)
                printf("[%d]", i);
        }
    }
    return 0;
}