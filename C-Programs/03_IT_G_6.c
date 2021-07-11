//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter the Number of Rows & Columns for First Matrix: ");
    scanf("%d%d", &r1, &c1);
    int a[r1][c1];
    printf("Enter the Elements of First Matrix: ");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    printf("\nEnter the Number of Rows & Columns for Second Matrix: ");
    scanf("%d%d", &r2, &c2);
    int b[r2][c2];
    printf("Enter the Elements of First Matrix: ");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    printf("\nThe First Matrix =\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\nThe Second Matrix =\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    if (c1 == r2)
    {
        int c[r1][c2];
        int sum = 0;
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                for (int k = 0; k < r2; ++k)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        printf("\nThe Resultant Matrix =\n");
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    else
        printf("\nMultiplication is Not Possible");
    return 0;
}