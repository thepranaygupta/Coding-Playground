#include <bits/stdc++.h>
#include <string.h>
//#include <iostream>
using namespace std;

int palin(string s)
{
    int i;
    string tmp;
    for (i = s.length() - 1; i >= 0; i--)
        tmp += s.at(i);
    if (tmp == s)
        return 1;
    else
        return 0;
}

int main()
{
    string s, subs;
    int count = 0;
    cin >> s;
    if (s.length() < 2)
        cout << "Sorry";
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                subs = s.substr(i, j);
                if (palin(subs) && subs.length() >= 2)
                {
                    count++;
                }
            }
        }
        if (count == 0)
            cout << "Sorry" << endl;
        else
            cout << count << endl;
    }
    return 0;
}