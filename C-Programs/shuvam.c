#include <stdio.h>
void fsmall(int b[]);
int main()
{
    int a[5], i;
    printf("Enter number ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    fsmall(a);
}
void fsmall(int b[])
{
    int i, small;
    small = b[0];
    for (i = 1; i < 5; i++)
    {
        if (b[i] < small)
            small = b[i];
    }
    printf("\nsmallest is %d", small);
}