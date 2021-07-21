//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    char s[100], rev[100];
    printf("Enter the String: ");
    scanf("%[^\n]s", &s);

    int length = 0;
    for (int i = 0; s[i++] != '\0'; length++)
        ;
    for (int i = length - 1; i >= 0; i--)
    {
        rev[length - i - 1] = s[i];
    }
    rev[length] = '\0';
    printf("\nOriginal String: %s", s);
    printf("\nReversed String: %s", rev);
    return 0;
}