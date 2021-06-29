#include <stdio.h>

int main()
{
    int i, j, n, a[10][10], lsum = 0, rsum = 0;

    printf("enter size of array: ");
    scanf("%d", &n);

    //first matrix
    printf("\nenter first elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("elements a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //1st matrix print
    printf("first elements are: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }

    //left daignl
    printf("left daignl is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d\t", a[i][j]);
                lsum += a[i][j];
            }
        }
    }

    //right daignl
    printf("\n\nright daignl is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                printf("%d\t", a[i][j]);
                rsum += a[i][j];
            }
        }
    }

    // //add of left daignl
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {

    //         if (i == j)
    //         {
    //             sum = sum + a[i][j];
    //         }
    //         //add of right daignl
    //         if (i + j == 2)
    //         {
    //             sum = sum + a[i][j];
    //         }
    //     }
    // }
    printf("\nadd of right daignl is: %d\n", rsum);
    printf("add of left daignl is: %d\n", lsum);
    return 0;
}
