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
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The unique elements found in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("[%d]", arr[i]);
    }
    return 0;
}