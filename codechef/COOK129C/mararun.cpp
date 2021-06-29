// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T, D, d, A, B, C, temp = 0;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> D >> d >> A >> B >> C;
        temp = D * d;
        if (temp < 10)
            cout << "0" << endl;
        else if (temp >= 10 && temp < 21)
            cout << A << endl;
        else if (temp >= 21 && temp < 42)
            cout << B << endl;
        else
            cout << C << endl;
    }
    return 0;
}