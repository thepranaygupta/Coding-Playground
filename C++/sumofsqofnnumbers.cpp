#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;;
    cout << "Enter the Limit: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        sum += i*i;
    }
    cout << "Sum of square is= " << sum;
    return 0;
}
