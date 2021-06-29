//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, count = 0;
    printf("Enter the total number of data: \n");
    scanf("%d", &n);
    int arr[n], dup[n];

    printf("Enter the data: \n");
    for (int i = 0; i < n; scanf("%d", &arr[i++]))
        ;

    printf("\nDuplicates in the Array are:");
    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                x++;
        }
        if (x > 1)
        {
            printf("%d, ", arr[i]);
            count++;
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}