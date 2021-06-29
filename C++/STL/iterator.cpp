#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Enter the Elements in the Vector: " << endl;
    // while (i < 5)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //     i++;
    // }
    cout << "\nThe Elements in the Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it1 = v.begin();
    cout << "First Element = " << *it1 << endl;

    vector<int>::iterator it2 = v.end();
    cout << "Last Element = " << *(it2 - 1) << endl;

    vector<pair<int, int>> vpair = {{1, 2}, {6, 9}, {5, 4}, {7, 5}};
    vector<pair<int, int>>::iterator itpair;
    cout << "\nElements of the Vector Pair:"<<endl;
    for (itpair = vpair.begin(); itpair != vpair.end(); itpair++)
        cout << (*itpair).first << "," << (*itpair).second << endl;

    // (*itpair).first is the same as itpair->first
    // for (itpair = vpair.begin(); itpair != vpair.end(); itpair++)
    //     cout << itpair->first << "," << itpair->second << endl;
    // (*itpair).first is the same as itpair->first
    
    return 0;
}
