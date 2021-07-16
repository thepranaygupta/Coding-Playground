//03_PRANAY GUPTA
#include <stdio.h>
void isSparseMatrix(int *, int, int, int, double);
int main()
{
    int m, n, c =0;
    double perc;
    printf("\nEnter rows and columns for the matrix :-\n");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter %d x %d elements :-\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==0)
                c++;
        }
    }
    printf("Enter Sparse percentage :- ");
    scanf("%lf", &perc);
    isSparseMatrix(a, m, n, c, perc);
    return 0;
}
void isSparseMatrix(int *a, int m, int n, int c, double perc)
{
    double p = ((double)c * 100.0) / ((double)(m + n));
    if (p > perc)
    {
        printf("The following matrix is Sparse\n");
        int i,j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", *(a + i + j));
            }
            printf("\n");
        }
        printf("\nPercentage of zeroes = %lf", p);
    }
    else
    {
        printf("\nPercentage of zeroes = %lf", p);
        printf("\nThe matrix is not Sparse");
    }
}