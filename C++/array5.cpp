#include <iostream>
using namespace std;
int main() {
    int n, max=0, min=0;
    cout << "Enter the Length of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    max=arr[0];
    min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }

    cout << "Maximum Element = " << max << endl;
    cout << "Minimum Element = " << min << endl;

    return 0;
}
