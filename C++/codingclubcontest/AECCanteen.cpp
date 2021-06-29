#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, ca=0, cb=0;
    cin >> n;
    char arr[n];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'A')
            ca++;
        else if(arr[i] == 'B')
            cb++;
    }
    if(ca>cb)
        cout << "0";
    else
        cout << (cb-ca)+1;
    return 0;
}
