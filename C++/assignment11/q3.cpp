// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int sum = 0;
int *sumOfPrime(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        for (int j = 2; j * j <= *(arr + i); j++)
        {
            if (*(arr + i) % j == 0)
                flag = 1;
        }
        if (flag != 1 && *(arr + i) != 0 && *(arr + i) != 1)
            sum += *(arr + i);
    }
    return &sum;
}
int main()
{
    int arr[5], *s;
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    s = sumOfPrime(arr);
    cout << "Sum of Prime in the Array: " << *s;
    return 0;
}