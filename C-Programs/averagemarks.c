#include <stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter Marks of 1st Subject: ");
    scanf("%f", & s1);
    printf("\nEnter Marks of 2nd Subject: ");
    scanf("%f", & s2);
    printf("\nEnter Marks of 3rd Subject: ");
    scanf("%f", & s3);
    printf("\nTotal Marks= %f", (s1+s2+s3));
    float avg = (s1+s2+s3)/3;
    printf("\nAverage Marks= %f\n", avg);
    if(avg>=40.0)
        printf("\nPassed.");
    else
        printf("\nFailed.");
    return 0;
}
