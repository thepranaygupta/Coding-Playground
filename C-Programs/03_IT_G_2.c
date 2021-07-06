//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the number of Rows for First Matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of Columns for First Matrix: ");
    scanf("%d", &c1);
    printf("Enter the number of Rows for Second Matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of Columns for Second Matrix: ");
    scanf("%d", &c2);
    if (r1 == r2 && c1 == c2)
    {
        int a[r1][c1], b[r2][c2];
        printf("Enter the Elements of the First Martix:\n");
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c1; ++j)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the Elements of the Second Martix:\n");
        for (int i = 0; i < r2; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nThe First Matrix is: \n");
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c1; ++j)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("\nThe Second Matrix is: \n");
        for (int i = 0; i < r2; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        printf("\nThe Addition of Two Matrices is: \n");
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c1; ++j)
            {
                printf("%d ", a[i][j] + b[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Addition Not Possible");
    return 0;
}