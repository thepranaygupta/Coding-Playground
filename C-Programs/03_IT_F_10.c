//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
int main()
{
    int a[20], b[20];
    int n, m, i;
    printf("Enter the size of First Array: ");
    scanf("%d", &m);
    printf("Enter the size of Second Array: ");
    scanf("%d", &n);

    printf("\nInput Elements in the First Array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nInput Elements in the Second Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int actr = 0, bctr = 0;
    int c[n + m];
    for (i = 0; i < m + n;)
    {
        if (a[actr] <= b[bctr])
        {
            c[i++] = a[actr++];
        }
        else
        {
            c[i++] = b[bctr++];
        }
    }
    printf("\nSorted Array is: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}