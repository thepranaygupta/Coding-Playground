#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the alphabate");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("%c is uppercase alphabate", ch);
    }
    else if (islower(ch))
    {
        printf("%c is lowercase alphabate", ch);
    }
    else{
        printf("this is not an alphabate");
    }
    return 0;
}