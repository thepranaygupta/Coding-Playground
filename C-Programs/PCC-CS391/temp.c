#include <stdio.h>
int insertElement(int arr[], int index, int keyToBeInserted, int size)
{
    // Check if the capacity of the array is already full
    if (index >= size)
        return index;
    //If not then the element is inserted at the last index
    //and the new array size is returned
    arr[index] = keyToBeInserted;
    return (index + 1);
}
// Main Function
int main()
{
    int array[20] = {31, 27, 3, 54, 67, 31};
    int size = sizeof(array) / sizeof(array[0]);
    int index = 6;
    int i, keyToBeInserted = 32;
    printf("\n Before Insertion: ");
    for (i = 0; i < index; i++)
        printf("%d  ", array[i]);
    // Calling the function to insert the element in the array
    index = insertElement(array, index, keyToBeInserted, size);
    printf("\n After Insertion: ");
    for (i = 0; i < index; i++)
        printf("%d  ", array[i]);
    return 0;
}