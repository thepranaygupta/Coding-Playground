//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    char x = 'A';
    char *p;
    p = &x;
    printf("%u %c", p, *p);
    return 0;
}