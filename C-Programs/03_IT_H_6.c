//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

void doSort(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Elements in the Array:\n", size);
    for (int i = 0; i < size; scanf("%d", &arr[i++]))
        ;

    printf("\nOriginal Array is: ");
    for (int i = 0; i < size; printf("%d ", arr[i++]))
        ;
    doSort(arr, size);

    printf("\nSorted Array is: ");
    for (int i = 0; i < size; printf("%d ", arr[i++]))
        ;
    return 0;
}