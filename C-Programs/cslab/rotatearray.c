//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int arr[100]
    return 0;
}

void rotate(long arr[], long n)
{
    long temp = arr[(int)(n)-1];
    for (int i = (int)n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}