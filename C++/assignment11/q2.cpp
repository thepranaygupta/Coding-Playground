// #include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
char rev[100];
char *reverse(char *st)
{
    int j=0,l=strlen(st);
    for(int i=l-1; i>=0; i--)
    {
        rev[j]=st[i];
        j++;
    }
    rev[j]='\0';
    return (rev);
}
int main()
{
    // int  = 100;
    char s[100], *n;
    cout << "Enter the String: ";
    gets(s);
    n=reverse(s);
    cout << n;
    return 0;
}