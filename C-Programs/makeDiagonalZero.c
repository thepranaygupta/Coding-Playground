#include <stdio.h>
void makeDiagonal(int b, int c, int d)
{
    int i, j;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            if((i==j) || (i+j == c))
                a[i][j]=0;
        }
        printf("\n");
    }
    // for (i = 0, j = d - i - 1; i<c, j> 0; i++, j--)
    // {
    //     printf("0");
    // }
}
void main()
{
    int m, n, i, j, res;
    printf("Enter the row and column of the array:\n");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter the elements of an array.\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix elements are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    makeDiagonal(a, m, n);
    printf("The new matrix elements are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}