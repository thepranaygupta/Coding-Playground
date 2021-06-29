//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int num, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (num % sum == 0)
        printf("%d is a Harshad Number.", num);
    else
        printf("%d is NOT a Harshad Number.", num);
    return 0;
}