#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==n)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 1
// 12
// 1 3
// 1  4
// 12345
