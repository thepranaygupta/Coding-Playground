//03_PRANAY GUPTA
#include <stdio.h>
// #include <math.h>
//#include <string.h>

int main()
{
    int n;
    printf("Enter the total number of Elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Elements: \n");
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    int lar = arr[0];
    int slar = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
        }
        if (arr[i] > slar && arr[i] < lar)
            slar = arr[i];
    }
    printf("Second Largest Element in the Array is = %d", slar);
    return 0;
}