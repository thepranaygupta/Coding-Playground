#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i=2; i<n/2; i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count==2)
        cout << "Number is Prime";
    else
        cout << "Number is not Prime";
    return 0;
}
