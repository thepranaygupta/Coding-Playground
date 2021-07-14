#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in ascending order\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int f, e, se, mid;
    printf("Enter the number to find its position in the array\n");
    scanf("%d", &se);
    int found = -1;
    f = 0;
    e = n - 1;
    while (f <= e)
    {
        mid = (f + e) / 2;
        if (se == arr[mid])
        {
            found = mid;
            break;
        }
        else if (se < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            f = mid + 1;
            mid = (f + e) / 2;
        }
    }
    if (found == -1)
    {
        printf("Element is not present in the array\n");
    }
    else
    {
        printf("Element position is %d\n", found);
    }
}