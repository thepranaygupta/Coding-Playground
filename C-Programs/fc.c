//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int arr[] = {55, 65, 75, 56, 78, 78, 90};
    int *i, *j;
    i = &arr[1];
    j = &arr[5];
    printf("%d %d", j - i, *j - *i);
    return 0;
}