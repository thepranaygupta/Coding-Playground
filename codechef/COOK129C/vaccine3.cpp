// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int d=0, p;
void recur(int r)
{
    d++;
    recur(p-r);
}
int main()
{
    int t, g, x[10], sum = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> g >> p;
        for (int j = 0; j < 10; j++)
        {
            cin >> x[j];
            if (j >= g - 1)
                sum += x[j];
        }
        int k = 9, rem = 0;
        while (true)
        {
            rem = x[k] - p;
            sum = sum - x[k];
            d++;
            if (rem > 0)
            {
                recur(rem);
            }
            if (x[k] < p)
            {
                k--;
            }
            k--;
        }
    }
    return 0;
}