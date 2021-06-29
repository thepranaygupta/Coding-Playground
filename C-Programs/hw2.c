// WAP in C to calculate factorial of a given number using call by value

//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
void factorial(int n)
{
    int fact = 1;
    for(int i = n; i>0; i--)
        fact*=i;
    printf("Factorial of %d is = %d", n, fact);
}

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    factorial(num);
    return 0;
}