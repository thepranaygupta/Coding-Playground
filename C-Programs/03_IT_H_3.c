//03_PRANAY GUPTA
#include <stdio.h>

int isEqual(int *a, int *b, int asize, int bsize)
{
    if (asize != bsize)
        return 0;
    else
    {
        for (int i = 0; i < asize; i++)
        {
            if (a[i] != b[i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int asize, bsize;
    printf("Enter the Size of First Array: ");
    scanf("%d", &asize);
    int a[asize];
    printf("Enter the Elements of First Array: ");
    for (int i = 0; i < asize; scanf("%d", &a[i++]))
        ;

    printf("\nEnter the Size of Second Array: ");
    scanf("%d", &bsize);
    int b[bsize];
    printf("Enter the Elements of Second Array: ");
    for (int i = 0; i < bsize; scanf("%d", &b[i++]))
        ;

    if (isEqual(a, b, asize, bsize))
        printf("\nBoth Arrays are Equal");
    else
        printf("Both Arrays are not Equal");
    return 0;
}