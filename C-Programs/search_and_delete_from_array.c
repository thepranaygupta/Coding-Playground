//4.	Search a particular element from the array and delete that element.

#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int pos, search;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Array Element-[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter Element that you want to search or delete:\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("The Element %d is found at location %d\n", search, i + 1);
            pos = i;
            break;
        }
    }
    for (i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deleting an element\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}