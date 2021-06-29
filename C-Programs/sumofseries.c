/*  1/2 - 2/3 + 3/4 - 4/5 + 5/6 - 6/7 + 
    Sum of Series = -0.240476            https://onecompiler.com/c/3wxs8x4n9
*/

//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    double sum = 0.0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d/%d + ", i, (i + 1));
            sum -= (double)i / (i + 1);
        }
        else
        {
            printf("%d/%d - ", i, (i + 1));
            sum += (double)i / (i + 1);
        }
    }
    printf("\nSum of Series = %lf", sum);
    return 0;
}