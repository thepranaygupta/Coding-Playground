// WAP in C to generate the fibonacci series upto first 10 terms (first two terms will be 0 & 1)

//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

void fibonacci(int a, int b, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a);
        int x = a + b;
        a = b;
        b = x;
    }
}
int main()
{
    printf("Fibonacci Series upto Frist 10 terms is:\n");
    fibonacci(0, 1, 10);
    return 0;
}