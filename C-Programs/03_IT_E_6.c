//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter limit : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 2; j++)
        {
            if (n - j == i || j - n == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}