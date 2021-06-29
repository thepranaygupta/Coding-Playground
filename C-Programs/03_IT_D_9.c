//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n, temp = 0, sum = 0;
    printf("Enter the term number: ");
    // scanf("%d", &n);
    n=5;
    printf("The series is = ");
    for (int i = 1; i <= n; i++)
    {
        temp = temp * 10 + i;
        if(i==n)
        
        if (i % 2 != 0)
        {
            printf("%d - ", temp);
            sum += temp;
        }
        else
        {
            printf("%d + ", temp);
            sum -= temp;
        }
    }
    printf("\b\b\nThe sum = %d", sum);
    return 0;
}