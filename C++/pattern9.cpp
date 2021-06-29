#include <iostream>
using namespace std;
int main() {
    int n, k=1;
    cout << "Enter the Number of Rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++) {
            if(i==1 || i==n || j==1 || j==n-i+1 || i==j || j==n) {
                printf("*");
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
