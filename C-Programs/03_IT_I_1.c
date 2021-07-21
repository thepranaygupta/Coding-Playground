//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, words = 0;
    printf("Enter the String: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        int ascii = str[i];
        char ch = str[i];
        if ((ascii > 64 && ascii < 91) || (ascii > 96 && ascii < 123))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        else if (ascii > 47 && ascii < 58)
            digits++;
        else if (ch == ' ')
            words++;
    }

    printf("\nNumber of Vowels in \"%s\" = %d", str, vowels);
    printf("\nNumber of Consonants in \"%s\" = %d", str, consonants);
    printf("\nNumber of Digits in \"%s\" = %d", str, digits);
    printf("\nNumber of Words in \"%s\" = %d", str, words + 1);
    return 0;
}