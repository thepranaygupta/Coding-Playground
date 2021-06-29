//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int n, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        b = i % 2 == 0 ? 0 : 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", b);
            b = !b;
        }
        printf("\n");
    }
    return 0;
}


// STDIN
// 5

// Output:
// 1
// 01
// 101
// 0101
// 10101