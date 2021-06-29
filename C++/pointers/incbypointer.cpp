// WAP that accepts 5 numbers in an array then pass the array into a function using pointer, then increase the value of each element by shifting the pointer
// elements can be increased by any value, for example : each element's value is increased by 10 by shifting the pointer

#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int *increase(int *arr)
{
    for(int i=0; i<5; i++)
    {
        *(arr+i) = *(arr+i) + 10;
    }
    return arr;
}
int main()
{
    int arr[5],*p;
    cout << "Enter the Array Elements: " << endl;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    p=increase(arr);
    cout << "Resultant Array is: " << endl;
    for(int i =0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}