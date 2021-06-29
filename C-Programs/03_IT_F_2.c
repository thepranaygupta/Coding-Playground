//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Enter the total number of data: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the data: \n");
    for (int i = 0; i < n; scanf("%d", &arr[i++]));

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    printf("\nSorted data in ascending order: ");
    for (int i = 0; i < n; printf("%d ", arr[i]), i++);

    return 0;
}