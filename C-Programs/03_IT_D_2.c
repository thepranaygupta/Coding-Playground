//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n, t = 9, sum = 0;
    printf("Input the number or terms : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d + ", t);
        sum += t;
        t = t*10+9;

    }
    
    printf("\nSum of Series upto 5 terms : %d", sum);
    return 0;
}