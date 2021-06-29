#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, m, count = 0, c = 0;
    char s1[70];
    char s2[70];
    printf("Enter the string1:\n");
    gets(s1);
    printf("Enter the string 2:\n");
    gets(s2);
    int flag = 1;
    int len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
    for (i = 0; i < len; i++)
    {
        if (s2[i] != s1[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
    return 0;
}