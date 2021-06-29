//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int bruh(int n)
{
    if (n == 1)
        printf("%d\n", n);
    else
    {
        printf("%d\n", n);
        bruh(n - 1);
        printf("%d\n", n);
    }
}
int main()
{
    bruh(5);
}