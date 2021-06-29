//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
#include <math.h>

int main()
{
    int s, e, nd = 0, aval = 0;
    printf("Input Starting Number of Range: ");
    scanf("%d", &s);
    printf("Input Ending Number of Range: ");
    scanf("%d", &e);
    printf("Armstrong numbers in given range are: ");
    for (s; s <= e; s++)
    {
        nd = 0;
        aval = 0;
        for (int i = s; i > 0; i /= 10)
            nd++;
        for (int i = s; i > 0; i /= 10)
            aval += floor(pow(i % 10, nd));
        if (aval == s)
            printf("%d ", s);
    }
    return 0;
}