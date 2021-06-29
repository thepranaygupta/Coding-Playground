#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Number of Rows: ";
    cin >> n;
    int s=n;
    for(int i=1;i<=n;i++) {
        for(int j=0; j<i-1;j++) {
            cout << " ";
        }
        for(int k=1;k<=s;k++){
            cout << "*";
        }
        cout << endl;
        s--;
    }
    return 0;
}
