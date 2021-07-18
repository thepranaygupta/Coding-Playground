#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    long long int n, x, k;
    cin >> n >> x >> k;
    long int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    int d = 0;
    for (int i = 0; i < n;)
    {
        if (a[i] < x)
        {
            d++;
            i++;
        }
        else if (a[i] >= x)
            i += k;
    }
    cout << d;
    return 0;
}