//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter the String: ");
    scanf("%[^\n]s", &s);
    
    int length = 0;
    for(int i = 0; s[i++]!='\0'; length++);
    
    printf("\nThe String is = %s", s);
    printf("\nLength of the String is = %d", length);
    return 0;
}