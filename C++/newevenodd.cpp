#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Limit " ;
    cin >> n;
    cout << "Even Numbers using forward loop" << endl;
    for(int i=0; i<=n; i++) {
        if(i%2==0)
            cout << i << " ";
    }
    cout << "\n\nOdd Numbers using backward loop" << endl;
    for( int i=n; i>=0; i--) {
        if(i%2!=0)
            cout << i << " ";
    }
    return 0;
}
