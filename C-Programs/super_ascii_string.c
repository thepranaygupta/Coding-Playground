#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i, j, flag = 1, fq = 1;
    printf("Enter a String : ");
    gets(s);
    for (i = 0; s[i] != NULL; i++)
    {
        fq = 0;
        for (j = 0; s[j] != NULL; j++)
        {
            if (s[i] == s[j])
                fq++;
        }
        if (fq != ((int)(tolower(s[i])) - 96))
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Super ASCII String");
    else
        printf("Not Super ASCII");
    return 0;
}
