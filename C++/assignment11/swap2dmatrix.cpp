/*
10 20 30 40          20 10 40 30
50 60 70 80   -->    60 50 80 70
11 22 33 44   -->    22 11 44 33
55 66 77 88          66 55 77 88
*/

#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    int arr[4][4], p;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }
    p=swapColumns(arr);
    cout << "Swapped Array:\n"
    return 0;
}