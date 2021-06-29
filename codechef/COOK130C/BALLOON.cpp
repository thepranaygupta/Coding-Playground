#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int t;
    while (t--)
    {
        int n;
        vector<int> a;
        int q[] = {1, 2, 3, 4, 5, 6, 7};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int count = 0;
        for (int i = 0; i < 7;)
        {
            for (int j = 0; j < n; j++)
            {
                if (q[i] == a[j])
                {
                    count++;
                    i++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}