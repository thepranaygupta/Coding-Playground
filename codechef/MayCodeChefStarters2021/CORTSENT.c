#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        char s[100];
        scanf("%d", &k);
        gets(s);
        s[strlen(s)] = ' ';
        s[strlen(s) + 1] = '\0';
        int f1 = 0, f2 = 0, count = 0;
        for (int i = 1; i < strlen(s); i++)
        {
            if (s[i] != ' ')
            {
                if (s[i] >= 97 && s[i] <= 109)
                    f1 = 1;
                else if (s[i] >= 78 && s[i] <= 90)
                    f2 = 1;
                else
                    break;
            }
            {
                if (f1 == 1 && f2 == 1)
                    break;
                else
                {
                    f1 = f2 = 0;
                    count++;
                }
            }
        }
        if (count == k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}