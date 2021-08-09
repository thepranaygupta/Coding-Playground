#include <stdio.h>
int recSearch(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    if (arr[l] == x)
        return l;
    if (arr[r] == x)
        return r;
    return recSearch(arr, l + 1, r - 1, x);
}

int main()
{
    int n;
    printf("Enter the total number of data: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Data: ");
    for (int i = 0; i < n; scanf("%d", &arr[i++]))
        ;
    int x;
    printf("Enter the Data you want to search: ");
    scanf("%d", &x);
    int index = recSearch(arr, 0, n - 1, x);
    if (index != -1)
        printf("FOUND");
    else
        printf("NOT FOUND");
    return 0;
}
