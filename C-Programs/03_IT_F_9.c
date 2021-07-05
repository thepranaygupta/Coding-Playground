//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
int main()
{
    int n, a[100], b[100], sum[100], i;
    printf("Enter the Size: ");
    scanf("%d", &n);
    printf("Enter the Elements in First Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Elements in Second Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
    }
    printf("\nArray1 Array2 Array3\n");
    for (i = 0; i < n; i++)
    {
        printf("%d   +   %d   =   %d\n", a[i], b[i], sum[i]);
    }
    return 0;
}