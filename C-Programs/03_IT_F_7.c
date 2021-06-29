//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int arr[100], n, val, pos, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter Elements in the Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted in the array: ");
    scanf("%d", &val);

    printf("The existing array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i <= n; i++)
    {
        if (val < arr[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;

    printf("\nAfter Inserting NEW element the array list is: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}