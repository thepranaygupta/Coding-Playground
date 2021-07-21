// Write a program in C to take one Matrix of size N X N as input. Pass that Matrix in a function, named as makeDiagonalZero(). This function will assign 0 to all diagonal elements of the matix. Print the Original & modified Matrix.

//03_PRANAY GUPTA
#include <stdio.h>

// void makeDiagonalZero(int, int);
void makeDiagonalZero(int n, int m[][n])
{
 for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) == (n - 1))
                m[i][j] = 0;
            if (i == j)
                m[i][j] = 0;
        }
    }
}

int main()
{
    int n;
    printf("Enter the Value of N: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the Elements of the %dx%d Matrix: \n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    makeDiagonalZero(n, mat);

    printf("\nModified Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

