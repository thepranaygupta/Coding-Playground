// Write a program in C to rotate an array by N positions.
//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int size, n;
    printf("Enter the Size of the Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Elements of the Array:");
    for (int i = 0; i < size; scanf("%d", &arr[i++]))
        ;
    printf("Enter the Value of N: ");
    scanf("%d", &n);

    printf("\nThe Given Array is = ");
    for (int i = 0; i < size; printf("%d ", arr[i++]))
        ;

    int res[size], j = 0;
    printf("\nFrom %dth Position the values of the Array are = ", n);
    for (int i = n; i < size; ++i)
    {
        printf("%d ", arr[i]);
        res[j++] = arr[i];
    }
    printf("\nBefore %dth Position the values of the Array are = ", n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
        res[j++] = arr[i];
    }
    printf("\nAfter Rotating from %dth Position the Array is = ", n);
    for (int i = 0; i < j; printf("%d ", res[i++]))
        ;
    return 0;
}