//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n, x = 1;
    printf("Enter the no of rows:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
            printf("  ");
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                x = 1;
            else
                x = x * (i - j + 1) / j;
            printf("%4d", x);
        }
        printf("\n");
    }
}