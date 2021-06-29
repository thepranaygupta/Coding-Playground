#include <stdio.h>

int main() {
    float a, b;
    printf("Enter First Number: ");
    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Summation = %f", (a+b));
    printf("\nSubtraction = %f", (a-b));
    printf("\nMultiplication = %f", (a*b));
    printf("\nDivision = %f", (a/b));
    printf("\nRemainder = %d", ((int)a%(int)b));
    return 0;
}
