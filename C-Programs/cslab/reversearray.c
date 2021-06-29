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
    for (int i = 0; i < n; scanf("%d", &arr[i++]))
        ;

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed Array is: ");
    for (int i = 0; i < n; printf("%d, ", arr[i++]))
        ;
    return 0;
}