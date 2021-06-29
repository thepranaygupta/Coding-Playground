#include <stdio.h>
int main(void)
{
    int t, i;
    scanf("%d", &t);
    while (t-- > 0)
    {
        long long N, temp = 1;
        scanf("%d", &N);
        long mod = 1000000007, e = N - 1, x = 2;
        if (e == 0)
            printf("1\n");
        else
        {
            while (e > 0)
            {
                if (e % 2 == 1)
                    temp = (x * temp) % mod;
                x = ((x % mod) * (x % mod)) % mod;
                e = e / 2;
            }
            printf("%d\n", temp);
        }
    }
    return 0;
}