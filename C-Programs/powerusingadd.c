//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
int power(int a, int b)
{
    int p = 0;
    for (int i = 0; i < b; i++)
    {
        p += a;
    }
    return p;
}
int main()
{
    int n, e, r=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the exponent: ");
    scanf("%d", &e);
    for (int i = 0; i < e; i++)
    {
        r = power(r, n);
    }
    printf("The Power value is = %d", r);
    return 0;
}