// 03_PRANAY GUPTA
#include <stdio.h>
#include <stdlib.h>

void printPrime(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        int isPrime = 1;
        int num = *(p + i);
        for (int j = 2; j <= num / 2; j++)
        {
            if (num % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            printf("%d, ", num);
    }
    return;
}

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int* p, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (*(p+j) > *(p + j + 1))
                swap((p+j), (p + j + 1));
}

void printArray(int *p, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d, ", *(p + i));
    return;
}

int main()
{
    int *p;
    int n, i, choice = 1;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation is not possible");
        exit(0);
    }
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    do
    {
        printf("\n\n1 - Print all Prime Elements in the Array\n2- Sort the Array\n3 - Display the Array\n4 - Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nPrime Numbers in the Array are: ");
            printPrime(p, n);
            break;

        case 2:
            printf("Unsorted Array: ");
            printArray(p, n);
            bubbleSort(p, n);
            printf("\nSorted Array: ");
            printArray(p, n);
            break;

        case 3:
            printf("\nArray Elements are: ");
            printArray(p, n);
            break;

        case 4:
            printf("\nProgram Terminated");
            break;

        default:
            printf("Invalid Input");
        }
    } while (choice != 4);

    return 0;
}