#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, xa, xb, XA, XB, a, b;
    cin >> t;
    while (t--)
    {
        cin >> xa >> xb >> XA >> XB;
        a = XA / xa;
        b = XB / xb;
        cout << a + b << endl;
    }
    return 0;
}