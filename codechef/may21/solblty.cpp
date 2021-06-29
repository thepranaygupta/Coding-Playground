#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, a, b;
        cin >> x>>a>>b;
        if((31<=x<=40) && (101<=a<=120) && (1<=b<=5))
        {
            int ans=a+(100-x)*b;
            cout<<ans*10<<endl;
        }
    }
    return 0;
}