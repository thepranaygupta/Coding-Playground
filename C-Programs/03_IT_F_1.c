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

    int max = arr[0], min = arr[0], evencount = 0, primearr[n], x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] % 2 == 0)
            evencount++;

        if (arr[i] != 1 && arr[i] != 0)
        {
            int factorcount = 0;
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                    factorcount++;
            }
            if (factorcount == 0)
                primearr[x++] = arr[i];
        }
    }

    printf("\nMaximum number          : %d", max);
    printf("\nMinimum number          : %d", min);
    printf("\nTotal No.of even number : %d", evencount);
    printf("\nPrime Numbers are       :");
    for (int i = 0; i < x; i++)
        printf("[%d]", primearr[i]);
    return 0;
}