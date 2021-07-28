//03_PRANAY GUPTA
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], w[25], wc[25];
    int i, j = 0, flag = 0;
    printf("Input the String : ");
    gets(s);
    printf("Input the Substring : ");
    gets(w);
    s[strlen(s)] = ' ';
    s[strlen(s) + 1] = '\0';
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            wc[j++] = s[i];
        }
        else
        {
            wc[j] = '\0';
            if (strcmp(w, wc) == 0)
            {
                flag = 1;
                break;
            }
            j = 0;
            strcpy(wc, "");
        }
    }
    if (flag == 1)
        printf("Substring exists");
    else
        printf("Substring doesn't exist");
    return 0;
}

// //03_PRANAY GUPTA
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100], substr[100];
//     printf("Enter the String: ");
//     gets(str);
//     strcat(str, " ");
//     printf("Enter the Substring to be Searched: ");
//     gets(substr);

//     // printf("String = \"%s\"\nSubString = \"%s\"\n", str, substr);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         char temp[100];
//         int j = 0;
//         if (str[i] != ' ')
//         {
//             temp[j] = str[i];
//             temp[j++] = '\0';
//             if (!strcmp(temp, substr))
//             {
//                 printf("\nThe Substring Exists in the String");
//                 return 1;
//             }
//         }
//         else if (str[i] == ' ')
//         {
//             temp[0] = '\0';
//             j = 0;
//         }
//     }
//     printf("\nSubstring not found");
//     return 0;
// }