//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
void summation(double a, double b)
{
    printf("\nSummation of %.1lf and %.1lf is = %lf", a, b, (a + b));
}
void subtraction(double *a, double *b)
{
    printf("\nSubtraction of %.1lf and %.1lf is = %lf", *a, *b, (*a - *b));
}
double multiplication(double a, double b)
{
    return a * b;
}
double division(double *a, double *b)
{
    return *a / *b;
}
int main()
{
    double a, b;
    int choice;
    printf("Enter the First Number: ");
    scanf("%lf", &a);
    printf("Enter the Second Number: ");
    scanf("%lf", &b);
    printf("\n1 - for Summation\n2 - for Subtraction\n3 - for Multiplication\n4 - for Division");
    printf("\nEnter your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        summation(a, b);
        break;
    case 2:
        subtraction(&a, &b);
        break;
    case 3:
        printf("\nMultiplication of %.1lf and %.1lf is = %lf", a, b, multiplication(a, b));
        break;
    case 4:
        printf("\nDivision of %.1lf and %.1lf is = %lf", a, b, division(&a, &b));
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}