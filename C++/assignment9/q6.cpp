#include <bits/stdc++.h>
// #include <iostream>
// #include <string.h>
using namespace std;

int main()
{
    char s[100];
    int len = 0;
    cout << "Enter a String: ";
    gets(s);
    char rv[len];
    for (int i = 0; s[i] != '\0'; i++)
        len++;
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rv[j] = s[i];
        j++;
    }
    cout << "Reversed String is = " << rv << endl;
    return 0;
}