//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>

int isPalin(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] != s[strlen(s) - 1 - i])
            return 0;
    return 1;
}

int main()
{
    char s[100];
    printf("Enter the String: ");
    gets(s);
    if (isPalin(s))
        printf("\n%s is Palindrome", s);
    else
        printf("\n%s is not Palindrome", s);
    return 0;
}