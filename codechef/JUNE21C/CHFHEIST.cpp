#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, D, d, P, Q, amt, temp, rem;
    cin >> t;
    while (t--)
    {
        cin >> D >> d >> P >> Q;
        temp = D / d;
        amt = 0;
        rem=0;
        // for (long long int i = 1; i <= D; i++)
        // {
        //     if (i % d == 0)
        //     {
        //         amt += P + (temp * Q);
        //         temp++;
        //     }
        //     else
        //         amt += P + (temp * Q);
        // }
        if (D % d == 0)
        {
            amt = (D * P) + Q * (temp - 1) * temp * d / temp;
        }
        else
        {
            amt = (D * P) + Q * (temp - 1) * temp * d / temp;
            rem = D % d;
            amt += rem * (P + temp * Q);
        }
        cout << amt << endl;
    }
    return 0;
}