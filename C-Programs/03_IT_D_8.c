//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int a1, n, d, an=0, sum=0;
    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &a1);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n); 
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &d);
    printf("The Sum of the A.P. series are: ");
    for (int i =1; i<=n; i++)
    {
        an= a1 + (i-1)*d;
        sum+=an;
        printf("%d + ", an);
    }
    printf("\b\b= %d", sum);    
    return 0;
}