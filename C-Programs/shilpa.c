#include <stdio.h>
int main()
{
    int arr[5], n = 5, i, temp, j;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER THE ELEMENT N0. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}