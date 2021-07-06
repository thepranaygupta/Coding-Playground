//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int r, c;
    printf("Input the rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c], t[c][r];
    
    printf("Enter the Elements of the Martix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);
    printf("\nThe Original Matrix is: \n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            t[j][i] = a[i][j];

    printf("\nThe Transposed Matrix is: \n");
    for (int i = 0; i < c; ++i)
    {
        for (int j = 0; j < r; ++j)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}