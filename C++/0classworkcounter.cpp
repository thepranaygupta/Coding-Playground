#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    vector<int> arr;
    // arr.push_back(3);
    // arr.push_back(71);
    for (int i = 0;; i++)
    {
        cin >> x;
        arr.push_back(x);
        if (arr[i] == 0)
            break;
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    printf("\nThese students have submitted the classwork(%d): ", arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        if (i != 0)
            cout << arr[i] << ", ";
    }
    return 0;
}