#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    double avg=0.0;
    cout << "Enter the Length of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    cout << "Sum of Elements = " << sum << endl;
    cout << "Average of Elements = " << avg << endl;
    return 0;
}
