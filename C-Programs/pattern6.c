//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int row=19;
    for(int i=1; i<=19; i++)
    {
        for (int j = 1;  j<=i; j++)
        {
            printf("#");
            for(int k=1; k<=22-i; k++)
            {
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        
    }
    return 0;
}