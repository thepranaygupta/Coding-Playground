//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, rsum = 0, lsum = 0;
    printf("Input the size of the Square Matrix: ");
    scanf("%d", &n);
    int a[n][n];

    printf("Enter the Elements of the Martix:\n");
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    printf("\nThe Original Matrix is: \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", a[i][j]);
            if ((i + j) == (n - 1))
                rsum += a[i][j];
            if (i == j)
                lsum += a[i][j];
        }
        printf("\n");
    }

    printf("\nThe Right Diagonal Sum = %d", rsum);
    printf("\nThe Left Diagonal Sum = %d", lsum);
    return 0;
}