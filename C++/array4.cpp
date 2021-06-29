#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Length of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nReversed Array: ";
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
