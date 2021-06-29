#include <iostream>
using namespace std;
int main() {
    double p, t, r;
    cout << "Enter Principle, Time and Rate: ";
    cin >> p >> t >>r;
    cout << "Simple Interest: " << (p*t*r)/100;
    return 0;
}
