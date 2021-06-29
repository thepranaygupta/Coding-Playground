#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    if(a%2==0)
        cout << "Even";
    else
        cout << "Odd\n";

    //8. Write a program to check whether a given number is positive or non-positive
    int b;
    cout << "\nEnter a Number: ";
    cin >> b;
    if(b>0)
        cout << "Positive";
    else
        cout << "Negative";

    //9.Write a program to check whether a given number is divisible by 5 or not.
    int c;
    cout << "\nEnter a Number: ";
    cin >> c;
    if(c%5==0)
        cout << "Divisible by 5";
    else
        cout << "Not Divisible by 5\n";

    //10. Write a program to check whether a given number is even or odd without using % operator
    int d;
    cout << "\nEnter a Number: ";
    cin >> d;
    int q = d/2;
    if(q*2==d)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}
