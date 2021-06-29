#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100], ch;
    int c=0;
    cout << "Enter a String: ";
    gets(s);
    cout << "Enter the Character: ";
    cin >> ch;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==ch)
            c++;
    }
    cout << "Occurrence of " << ch << " is " << c << endl;
    return 0;
}