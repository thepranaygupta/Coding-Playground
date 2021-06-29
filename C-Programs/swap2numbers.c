#include <stdio.h>
int main() {
    int a=10, b=20;
    printf("Before swap a=%d b=%d", a, b);

    //1. Write a program to swap values of two int variables
    int x=a;
    a=b;
    b=x;
    printf("\nAfter swap a=%d b=%d", a, b);


    //2. Write a program to swap values of two int variables without using third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d b=%d", a, b);

    return 0;
}
