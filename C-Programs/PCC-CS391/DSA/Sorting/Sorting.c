// 03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>
// 1 2 6 5 3 4

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

void selectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            swap(&array[i], &array[min]);
        }
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the Size of the Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; scanf("%d", &arr[i++]))
        ;

    printf("\t-:Choose any ONE of the Following:-");
    printf("\n1 - Bubble Sort\n2 - Insertion Sort\n3 - Selection Sort\nEnter your Choice: ");
    int choice;
    scanf("%d", &choice);

    printf("\nUnsorted Array: ");
    printArray(arr, size);

    switch (choice)
    {
    case 1:
        bubbleSort(arr, size);
        printf("Sorted array: ");
        printArray(arr, size);
        break;

    case 2:
        insertionSort(arr, size);
        printf("Sorted array: ");
        printArray(arr, size);
        break;

    case 3:
        selectionSort(arr, size);
        printf("Sorted array: ");
        printArray(arr, size);
        break;

    default:
        printf("Invalid Input");
    }
    return 0;
}