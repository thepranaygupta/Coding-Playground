#include <iostream>
using namespace std;
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


    // 3. Write a program to print last digit of a given number
    int num;
    cout << "\nEnter number: ";
    cin >> num;
    cout << "Last digit of " << num << " is: " << num%10;

    //4. Write a program to print a given number but without last digit
    int num2;
    cout << "\nEnter number: ";
    cin >> num2;
    cout << "Number without last digit is: " << num2/10;
    return 0;
}
