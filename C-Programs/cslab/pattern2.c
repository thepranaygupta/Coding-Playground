//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int k = i - 1; k >= 0; k--)
            printf("%d", k);
        for (int l = 1; l < i; l++)
            printf("%d", l);
        printf("\n");
    }
    return 0;
}
