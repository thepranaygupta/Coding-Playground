#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bi[n], sum = 0, cost = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bi[i];
        sum += bi[i];
    }
    int mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (mean % 2 == 0 && bi[i] % 2 != 0)
            cost++;
    }
    cout << cost;
    return 0;
}
