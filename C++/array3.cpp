#include <iostream>
using namespace std;
int main() {
    int n, m=0, sum=0;
    cout << "Enter the Length of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n/2; i++){
        m=arr[i]*arr[n-i-1];
        sum+=m;
    }
    if(n%2!=0)
        sum+=arr[n/2];
    cout << "Sum = " << sum << endl;
    return 0;
}
