//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    printf("Enter the 1st String: ");
    scanf("%[^\n]s", &s1);
    printf("Enter the 2nd String: ");
    scanf("\n%[^\n]s", &s2);
    int flag = 1;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("\nBoth the Strings are Equal");
    else
        printf("\nThe Strings are not Equal");
    return 0;
}