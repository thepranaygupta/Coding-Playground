//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>

void sort(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = i; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main()
{
    char s1[100], s2[100];
    printf("Enter the First String: ");
    gets(s1);
    printf("Enter the Second String: ");
    gets(s2);

    sort(s1);
    sort(s2);

    if (!strcmp(s1, s2))
        printf("\nThe Strings are Anagrams");
    else
        printf("\nThe Strings are not Anagrams");
    return 0;
}