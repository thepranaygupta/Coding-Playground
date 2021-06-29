#include <iostream>
using namespace std;
int main() {
    int arr1[3][3];
    int arr2[3][3];
    cout << "Enter 1st 3x3 Array Elements: ";
    for(int i=0; i<3;i++) {
        for(int j=0; j<3; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter 2nd 3x3 Array Elements: ";
    for(int i=0; i<3;i++) {
        for(int j=0; j<3; j++) {
            cin >> arr2[i][j];
        }
    }
    cout << "Sum of the two Matrices: \n";
    for(int i=0; i<3;i++) {
        for(int j=0; j<3; j++) {
            cout << arr1[i][j]+arr2[i][j];
        }
        cout << endl;
    }

    return 0;
}
