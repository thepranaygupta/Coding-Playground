#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (x + b[i] >= a[i])
            cout << "First ";
        else
            cout << "Second ";
    }
    return 0;
}