//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int a[3][3];
    printf("Enter the Elements of the Martix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe Matrix is: \n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}