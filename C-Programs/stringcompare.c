#include <stdio.h>
#include <string.h>

char strcomp(char str1[], char str2[])
{
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int i = 0;

    if (l1 == l2)
    {
        while (str1[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
                return (str1[i] - str2[i]);
            }

            i++;
        }
        return 0;
    }
    else
    {
        if (l1 > l2)
        {
            while (str2[i] != '\0')
            {
                i++;
            }
            return str1[i];
        }
        else if (l2 > l1)
        {
            while (str1[i] != '\0')
            {
                i++;
            }
            return (-1 * str2[i]);
        }
    }
}
void main()
{
    char str1[] = "pranay";
    char str2[] = "pranay";
    printf("%d", strcomp(str1, str2));
}