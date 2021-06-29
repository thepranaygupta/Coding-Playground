#include <iostream>
using namespace std;
int main() {
    int n, k=1;
    cout << "Enter the Number of Rows: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=n; j>=1; j--) {
            if(j>i)
                cout << " ";
            else {
                cout << k << " ";
                k++;
            }
        }
        cout << endl;
    }
    return 0;
}
