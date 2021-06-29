//03_PRANAY GUPTA
#include <stdio.h>

int main()
{
    int n, num = 1;
    printf("Enter the Value of N: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}