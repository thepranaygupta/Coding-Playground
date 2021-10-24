//03_PRANAY GUPTA
#include <stdio.h>
#include <stdlib.h>

int isPeterson(int num)
{
    int n = num, rem, sum = 0, fact = 1;
    while (n != 0)
    {
        rem = n % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n = n / 10;
    }
    return sum == num;
}

int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}

int isPalindrome(int num)
{
    int reverse = 0;
    for (int i = num; i > 0; i /= 10)
        reverse = (reverse * 10) + (i % 10);
    return reverse == num;
}

int isHarshad(int num)
{
    int sod = 0;
    for (int i = num; i > 0; i /= 10)
        sod += i % 10;
    if (num % sod == 0)
        return 1;
    return 0;
}

int main()
{
    int num, choice;
    while (1)
    {
        printf("\n\n1 - Check for Peterson Number");
        printf("\n2 - Check for Perfect Number");
        printf("\n3 - Check for Palindrome Number ");
        printf("\n4 - Check for Harshad Number");
        printf("\n5 - Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        if (choice == 5)
            exit(0);
        printf("Enter the Number: ");
        scanf("%d", &num);
        switch (choice)
        {
        case 1:
            if (isPeterson(num))
                printf("%d is a Peterson Number", num);
            else
                printf("%d is not a Peterson Number", num);
            break;
        case 2:
            if (isPerfect(num))
                printf("%d is a Perfect Number", num);
            else
                printf("%d is not a Perfect Number", num);
            break;
        case 3:
            if (isPalindrome(num))
                printf("%d is a Palindrome Number", num);
            else
                printf("%d is not a Palindrome Number", num);
            break;
        case 4:
            if (isHarshad(num))
                printf("%d is a Harshad Number", num);
            else
                printf("%d is not a Harshad Number", num);
            break;
        default:
            printf("Invalid Input!");
            break;
        }
    }
    return 0;
}