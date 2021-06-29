//..ADDING TWO ARRAY MATRIX..

#include <stdio.h>
int main()
{
    int i, j, n;
    int array[100][100], sum[100][100], array2[100][100];

    printf("Enter the Number of Rows: ");
    scanf(" %d", &n);

    // 1 item
    printf("\nEnter the first matrix element.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter A[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // second item
    printf("\nEnter the second  element.\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter A[%d][%d]:", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    //3loop add
    printf("sum of two array matrix : \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = array[i][j] + array2[i][j];
        }
    }

    // sum print looop
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
