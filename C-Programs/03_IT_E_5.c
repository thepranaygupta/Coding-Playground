//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= i; k++)
            printf("%d ", k);
        for(int l=i-1; l>0; l--)
            printf("%d ", l);
        printf("\n");
    }
    return 0;
}