//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int amt, five=0, one=0;
    printf("Enter the Amount: ");
    scanf("%d", &amt);
    while (amt>99)
    {
        if(amt>=500)
        {
            amt-=500;
            five++;
        }
        else
        {
            amt-=100;
            one++;
        }
    }
    printf("\nNumber of 500 Notes: %d", five);
    printf("\nNumber of 100 Notes: %d", one);
    printf("\nRemaining: %d", amt);
    
    return 0;
}