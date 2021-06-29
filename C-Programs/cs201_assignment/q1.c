//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n; 
    long long int x=9, sum=0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("S = ");
    while (n>0)
    {
        printf("%d + ", x);
        sum+=x;
        x= (x*10)+9;
        n--;
    }
    printf("\nSum of the series = %ld", sum);
    return 0;
}