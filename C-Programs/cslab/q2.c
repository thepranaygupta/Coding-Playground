//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; i += 2)
    {
        printf("%d*%d + ", i, i + 2);
        sum += i * (i + 2);
    }
    printf("\nSum is = %d", sum);
    return 0;
}