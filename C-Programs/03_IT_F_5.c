//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, count = 0;
    printf("Enter the total number of data: \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the data: \n");
    for (int i = 0; i < n; scanf("%d", &arr[i++]));

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}
