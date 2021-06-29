//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n, num = 1;
    printf("Enter the Value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}