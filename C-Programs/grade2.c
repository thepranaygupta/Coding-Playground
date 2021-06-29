//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Grade : ");
    c = getchar();
    switch (c)
    {
    case 'E':
        printf("Excellent");
        break;
    
    case 'V':
        printf("Very Good");
        break;
        
    case 'G':
        printf("Good");
        break;
    
    case 'A':
        printf("Average");
        break;
    
    case 'F':
        printf("Fail");
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}