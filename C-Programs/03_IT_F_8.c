//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int arr[100], n, pos, i;
    printf("Input the size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position for deleting the element: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("The New Array is: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d  ", arr[i]);
    }
}