//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows: \n");
    // scanf("%d", &n);
    n=6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", 64 + k);
        }
        for (int l = i - 1; l > 0; l--)
        {
            printf("%c ", 64 + l);
        }
        printf("\n");
    }
}