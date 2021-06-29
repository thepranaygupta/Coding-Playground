//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(double i = 1; i <= n; i++) {
        sum += 1/i;
        printf("1/%d + ",(int)i);
    }
    printf("\nSum of Series upto 5 terms : %lf", sum);
    return 0;
}