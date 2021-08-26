/*
   *
  *_*
 *_*_*
*_*_*_*

*/
#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= 1; j--)
        {
            // for (j = 4; j >= 1; j--)
            // {
            //     if (j > i)
            //         printf(" ");
            //     else
            //     {
            //         if (j % 2 == 0)
            //             printf("_");
            //         else
            //             printf("*");
            //     }
        }
        printf("\n");
    }
    return 0;
}
