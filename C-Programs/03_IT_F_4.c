//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    int arr[n], freq[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }   
    printf("\nThe Frequency of all Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}