#include <iostream>
using namespace std;

int main()
{
    char s[100];
    int len=0;
    cout << "Enter a String: ";
    gets(s);
    for(int i=0; s[i]!='\0'; i++)
    {
        len++;
    }
    cout << "Length of String is= " << len << endl;
    return 0;
}