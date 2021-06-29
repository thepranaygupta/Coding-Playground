#include <iostream>
using namespace std;
int main() {
    int n, sumO=0, sumE=0;
    cout << "Enter the Length of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0)
            sumE += arr[i];
        else
            sumO += arr[i];
    }
    cout << "Sum of Even Elements = " << sumE << endl;
    cout << "Sum of Odd Elements = " << sumO << endl;
    return 0;
}
