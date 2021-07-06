//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Input the size of the Square Matrix: ");
    scanf("%d", &n);
    int a[n][n];
    int rsum[n], csum[n];
    printf("Enter the Elements of the Martix:\n");
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    printf("\nThe Original Matrix is: \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        rsum[i] = 0;
        for (int j = 0; j < n; j++)
            rsum[i] = rsum[i] + a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        csum[i] = 0;
        for (int j = 0; j < n; j++)
            csum[i] = csum[i] + a[j][i];
    }

    printf("\nThe sum or rows and columns of the matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("= %d", rsum[i]);
        printf("\n");
    }
    printf("----\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", csum[i]);
    }

    return 0;
}