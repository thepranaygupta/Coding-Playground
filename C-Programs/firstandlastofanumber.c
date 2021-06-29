//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, first, last;
    scanf("%d", &n);
    last = n % 10;
    for (int i = n; i != 0; i /= 10)
    {
        first = i % 10;
    }
    printf("First Digit = %d\nLast Digit = %d", first, last);
    return 0;
}