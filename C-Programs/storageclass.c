//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
int a=10;
inc()
{
    static int i =1;
    printf("%d ", i);
    i++;
}
int main()
{
    inc();
    inc();
    inc();
    inc();
}