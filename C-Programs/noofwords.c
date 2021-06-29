//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>
//#include <math.h>

int main()
{
    char s[1];
    int count=0;
    printf("Enter a String: ");
    gets(s);
    // scanf("%s", &s);
    printf("%s", s);
    for(int i=0; s[i]!='\0'; i++)
    {
        count++;
    }
    printf("\n%d", count);
    return 0;
}