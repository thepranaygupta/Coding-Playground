#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cout << "Enter a String: ";
    gets(s);

    for(int i=0; s[i]!='\0'; i++)
    {
        if((int)s[i]>64 && (int)s[i]<91)
            s[i] = (char)((int)s[i]+32);
    }
    cout << "String in Uppercase is= " << s << endl;
    return 0;
}