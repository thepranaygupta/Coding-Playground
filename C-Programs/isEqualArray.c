#include <stdio.h>
void sort(int arr[], int n)
{
    int i, j, temp;
    // printf("\nHAHA2");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void isEqual(int arr1[], int arr2[], int m, int p)
{
    int i;
    if (m != p)
    {
        printf("\nArray are not same.\n");
        return;
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            if (arr1[i] != arr2[i])
            {
                printf("\nArray are not same.\n");
                return;
            }
        }
    }
    printf("\nArray are the same.\n");
}
void main()
{
    int a, b, i, res;
    printf("Enter the size of array 1 and 2.\n");
    scanf("%d%d", &a, &b);
    int a1[a], a2[b];
    printf("Enter the Elements of array 1.\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the elements of array 2.\n");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a2[i]);
    }

    sort(a1, a);
    for (i = 0; i < a; i++)
    {
        printf("%d ", a1[i]);
    }
    sort(a2, b);
    for (i = 0; i < b; i++)
    {
        printf("%d ", a2[i]);
    }
    isEqual(a1, a2, a, b);
    // if (isEqual(a1, a2, a, b))
    //     printf("Array are not same.\n");
    // else
    //     printf("Array are equal.\n");
}