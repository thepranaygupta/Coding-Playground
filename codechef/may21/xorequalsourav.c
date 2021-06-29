#include <stdio.h>
#include <math.h>
int main(void)
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        long long int N, count = 0;
        scanf("%d", &N);
        for (long long int j = 0; j <= (pow(2, N) - 1); j++)
        {
            if ((j ^ (j + 1)) == ((j + 2) ^ (j + 3)))
                count++;
        }
        count = count % ((long long int)pow(10, 9) + 7);
        printf("%d\n", count);
    }
    return 0;
}