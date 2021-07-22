//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter the String: ");
    gets(s);
    printf("\nOriginal String = %s", s);

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    printf("\nUpdated String = %s", s);
    return 0;
}