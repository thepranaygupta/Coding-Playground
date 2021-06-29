//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int k = n; k >= i; k--)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}