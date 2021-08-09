//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Enter the Number of Terms: ");
    scanf("%d", &n);
    int sum=0;
    for(int i = 1; i <= n;i++)
    {
        int fact = 1;
        for(int j = 1; j<=i; j++)
        {
            fact *= j;

        }
    }
    return 0;
}