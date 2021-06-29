// WAP in C to print prime numbers from 2 to 50 using call by value

//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
void printPrime(int a, int b)
{
    for(int i = a; i <= 50; i++)
    {
    int factorcount = 0;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
                factorcount++;
        }
        if(factorcount == 0)
            printf("%d, ", i);
    }
}
int main()
{
    printf("Prime Numbers from 2 to 50 are: \n");
    printPrime(2, 50);
    return 0;
}