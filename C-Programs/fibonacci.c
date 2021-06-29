//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n, fibo=0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ", fibo);
        fibo+=i;
    }
    return 0;
}