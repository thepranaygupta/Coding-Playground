//WAP to take one integer number and convert that number to its equivalent binary number and octal number
//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n;
    printf("Enter the Number to be Converted: ");
    scanf("%d", &n);

    int count = 0, temp = n, binary[32];
    while (temp > 0)
    {
        binary[count] = temp % 2;
        temp /= 2;
        count++;
    }
    printf("\n%d in Binary form is = ", n);
    for (int i = count - 1; i >= 0; i--)
        printf("%d", binary[i]);

    int octal[100];
    count = 0;
    temp = n;
    while (temp > 0)
    {
        octal[count] = temp % 8;
        temp /= 8;
        count++;
    }
    printf("\n%d in Octal form is = ", n);
    for (int i = count - 1; i >= 0; i--)
        printf("%d", octal[i]);
    return 0;
}