// write a menu driven program to insert delete & display elements of an array

//03_PRANAY GUPTA
#include <stdio.h>
//#include <string.h>
//#include <math.h>

int main()
{
    int arr[100] = {0};
    int size = 0;
    int val, pos, choice = 1;
    do
    {
        printf("\n\n1 - Insert an Element");
        printf("\n2 - Delete an Element");
        printf("\n3 - Display all Elements");
        printf("\n4 - Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Value to be Inserted: ");
            scanf("%d", &val);
            printf("Enter Position to be Inserted at: ");
            scanf("%d", &pos);

            if (pos > size)
                printf("Insertion not Possible.\n");
            else
            {
                size++;
                for (int i = size - 1; i >= pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos - 1] = val;
                printf("Value added successfully!");
            }
            break;

        case 2:
            printf("Enter the Position where you wish to delete element: ");
            scanf("%d", &pos);

            if (pos > size)
                printf("Deletion not Possible.\n");
            else
            {
                for (int i = pos - 1; i < size - 1; i++)
                    arr[i] = arr[i + 1];
                size--;
                printf("Value deleted successfully!");
            }
            break;

        case 3:
            printf("\nThe Elements of the Array are: ");
            for (int i = 0; i < size; i++)
                printf("%d, ", arr[i]);
            break;

        case 4:
            printf("\nProgram Terminated.");
            break;
        default:
            printf("\nInvalid Input!");
            break;
        }

    } while (choice != 4);

    return 0;
}