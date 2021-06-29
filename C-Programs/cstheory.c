//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
void swap(int a, int b)
{
    int x = a;
    a = b;
    b = x;
    
    printf("%d, %d", a, b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    swap(a,b);
    return 0;
}