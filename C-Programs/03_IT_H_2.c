//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>

void printFactors(int);      //a
void printPrimeFactors(int); //b
int factorial(int);          //c
void isPrime(int);           //d
int isFibonacci(int);        //e
int noOfDigits(int);         //f
void isArmstrong(int);       //g
void isPerfect(int);         //h

int main()
{
    int num;
    char choice;
    int factors[100];
    printf("Enter the Number: ");
    scanf("%d", &num);
    // fflush(stdin);
    printf("\na. Print all the factors of that number\nb. Print all the prime factors of that number\nc. Print the factorial of that number\nd. Check whether that number is Prime or Not\ne. Check whether that number is a Fibonacci number or not.\nf. Count the number of digits present in that Number\ng. Check that number is a armstrong number  or not\nh. Check that number is a perfect number or not");
    printf("\nEnter your Choice: ");
    scanf("\n%c", &choice);
    switch (choice)
    {
    case 'a':
        printf("\nAll the Factors of %d are = ", num);
        printFactors(num);
        break;
    case 'b':
        printf("\nAll the Prime Factors of %d are = ", num);
        printPrimeFactors(num);
        break;
    case 'c':
        printf("\nFactorial of %d is = %d", num, factorial(num));
        break;
    case 'd':
        isPrime(num);
        break;
    case 'e':
        if (isFibonacci(num))
            printf("\n%d is a Fibonacci Number", num);
        else
            printf("\n%d is not a Fibonacci Number", num);
        break;
    case 'f':
        printf("\nThe Number of Digits in %d is = %d", num, noOfDigits(num));
        break;
    case 'g':
        isArmstrong(num);
        break;
    case 'h':
        isPerfect(num);
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}

void printFactors(int n)
{
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            printf("[%d]", i);
}

void printPrimeFactors(int n)
{
    for (int i = 2; i < n; i++)
    {
        int count = 0;
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    count++;
            }
            if (count == 2)
                printf("[%d]", i);
        }
    }
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}

void isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("\n%d is Prime", n);
    else
        printf("\n%d is not Prime", n);
}

int isFibonacci(int n)
{
    int x1 = 0, x2 = 1, x3;
    if (n == 0 || n == 1)
        return 1;
    else
    {
        for (int i = 2; i < n; ++i)
        {
            x3 = x1 + x2;
            if (x3 == n)
                return 1;
            x1 = x2;
            x2 = x3;
        }
    }
    return 0;
}

int noOfDigits(int n)
{
    int nod = 0;
    while (n > 0)
    {
        nod++;
        n /= 10;
    }
    return nod;
}

void isArmstrong(int n)
{
    int aval = 0;
    for (int i = n; i > 0; i /= 10)
        aval += floor(pow(i % 10, noOfDigits(n)));
    if (aval == n)
        printf("\n%d is an Armstrong Number", n);
    else
        printf("\n%d is not an Armstrong Number", n);
}

void isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        printf("\n%d is a Perfect Number", n);
    else
        printf("\n%d is not a Perfect Number", n);
}
