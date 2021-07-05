//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int i, j, m, n, a[20], b[20], c[30], temp;
    printf("Input the size of first array: ");
    scanf("%d", &m);
    printf("Input the size of second array: ");
    scanf("%d", &n);
    printf("\nInput Elements in the first Array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nInput Elements in the Second Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int k = 0;
    for (i = 0; i < m; i++)
    {
        c[k++] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        c[k++] = b[i];
    }
    printf("The Array after Merging is:\n");
    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
        printf(" %d ", c[i]);
    }

}