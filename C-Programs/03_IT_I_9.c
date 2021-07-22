//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int pos, len;
    printf("Enter the String: ");
    gets(s);
    printf("Input the Position to Start Extraction: ");
    scanf("%d", &pos);
    printf("Input the Length of Substring: ");
    scanf("%d", &len);

    char substr[len];
    if ((pos + len) > strlen(s))
        printf("Invalid Input");
    else
    {
        int j=0;
        for(int i = pos-1; i<(pos+len-1); i++)
            substr[j++] = s[i];
        substr[j]='\0';
        printf("\nThe Substring is = \"%s\"", substr);
    }
    return 0;
}