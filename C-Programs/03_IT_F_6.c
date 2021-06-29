//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[100];
    int i, n, even = 0, odd = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input five elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[even] = arr1[i];
            even++;
        }
        else
        {
            arr3[odd] = arr1[i];
            odd++;
        }
    }
    printf("The Even elements of EVEN array are: ");
    for (i = 0; i < even; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    printf("The Even elements of ODD array are: ");
    for (i = 0; i < odd; i++)
    {
        printf("%d ", arr3[i]);
    }
}