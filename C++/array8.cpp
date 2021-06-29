#include <iostream>
using namespace std;
int main()
{
    int n,sum1=0, sum2=0;
    int arr[3][3];
    cout << "Enter 3x3 Array Elements: ";
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nThe 3x3 Array is:" << endl;
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for(int i=0; i<3; i++) {
        sum1+=arr[i][i];
    }
    for(int i=0; i,3; i++) {
        for(int j=2; j>=0; j--) {
            sum2+=arr[i][j];
        }
    }
    cout << "Sum of Diagonals = " << sum1 << " & " << sum2 << endl;
    cout << "Difference = " << sum1-sum2;
    return 0;
}
