//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
#include <math.h>

int main()
{
    int x, n, y = 1, sum = 0, sign = 1;
    printf("Input the Value of x: ");
    scanf("%d", &x);
    printf("Input the number of Terms: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum *= (-1);
        sum += pow(x, y);
        y += 2;
        n--;
    }
    printf("The Sum = %d", sum);
    return 0;
}