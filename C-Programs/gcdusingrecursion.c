#include <stdio.h>
int GCD(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else if (a > b)
        return GCD(a - b, b);
    else
        return GCD(a, b - a);
}
int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("GCD of %d & %d is = %d", n1, n2, GCD(n1, n2));
    return 0;
}