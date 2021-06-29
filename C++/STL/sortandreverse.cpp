#include <bits/stdc++.h>
using namespace std;

vector<int> sortVector(vector<int> v)
{
    int t;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
    return v;
}

vector<int> reverseVector(vector<int> v)
{
    int temp;
    for (int i = 0; i < v.size() / 2; i++)
    {
        temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;
    }
    return v;
}

int main()
{
    int n = 5;
    vector<int> v;
    cout << "Enter the Vector Elements: ";
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Sorted Vector is: " << endl;
    v = sortVector(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    cout << "Reveresed Vector is: " << endl;
    vector<int> v2 = reverseVector(v);
    for (auto x : v2)
        cout << x << " ";
    cout << endl;
    return 0;
}
