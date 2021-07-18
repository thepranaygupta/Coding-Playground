#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x;
    cin >> y;
    long long int pow = 1;
    while (pow < y)
        pow *= x;
    if (pow == y)
        cout << "Y";
    else if (x == 0 && y == 1)
        cout << "Y";
    else if (x == 1)
        cout << "Y";
    else
        cout << "N";
    return 0;
}