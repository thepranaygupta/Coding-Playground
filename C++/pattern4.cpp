#include <iostream>
using namespace std;
int main() {
    int n,s=1;
    cout << "Enter the Number of Rows: ";
    cin >> n;
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i-1;j++) {
            cout << " ";
        }
        for(int k=1;k<=s;k++){
            cout << "*";
        }
        cout << endl;
        s++;
    }
    return 0;
}
