#include <stdio.h>
int findProduct(int A[], int N)
{
    if (N <= 0)
        return 1;
    return (findProduct(A, N - 1) * A[N - 1]);
}
int main()
{
    int n;
    printf("Enter the Total Number of Data: ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the Data: ");
    for (int i = 0; i < n; scanf("%d", &A[i++]))
        ;
    printf("\nProduct = %d", findProduct(A, n));
    return 0;
}