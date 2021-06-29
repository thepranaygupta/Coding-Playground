#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    string sapt = "Saahiprst";
    int n;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        if (s == sapt)
        {
            cout << i;
            break;
        }
    }
    return 0;
}