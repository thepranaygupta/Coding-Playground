//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (int i = 2; i <= n + 1; i++)
    {
        printf("%d*%d*%d + ", (i - 1), i, (i + 1));
        sum += (i - 1) * i * (i + 1);
    }
    printf("\nSum is = %d", sum);
    return 0;
}