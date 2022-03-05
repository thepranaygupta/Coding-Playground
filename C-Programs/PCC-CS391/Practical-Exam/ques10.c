#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct list_item
{
    int data;
    struct list_item *next;
    struct list_item *previous;
} list__item;

list__item *start, *end;

int menu();
list__item *create_item();
void create_list(list__item *);
void display_list();
bool delete__node(int);

int main()
{
    system("cls");
    start = end = NULL;
    int user__select, node__number;
    char choice;
    while (user__select = menu())
    {
        if (user__select == 4)
        {
            printf("Exiting...");
            return 0;
        }
        printf("\n");
        switch (user__select)
        {
        case 1:
        {
            do
            {
                create_list(create_item());
                printf("Want to insert more item to the list? (Y/N) --> ");
                scanf(" %c", &choice);
                choice = toupper(choice);
                printf("\n");
            } while (choice == 'Y');
            break;
        }
        case 2:
        {
            printf("Current list is:\n");
            display_list();
            break;
        }
        case 3:
        {
            if (!start)
            {
                printf("The list is empty, Deletion cannot be performed!\n");
                break;
            }
            printf("Current list is:\n");
            display_list();
            if (start == end)
            {
                printf("This is the last node in the list!");
                start = end = NULL;
                printf("Only node deleted successfully!");
                break;
            }
            printf("Input node number (from start) you want to delete --> ");
            scanf("%d", &node__number);
            if (!delete__node(node__number))
            {
                printf("Wrong node selected... Cannot perform deletion");
                break;
            }
            printf("The list is now:\n");
            display_list();
            break;
        }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int menu()
{
    system("pause");
    system("cls");
    printf("!..... Menu List .....!\n");
    printf("\n");
    printf("1. Create a list\n");
    printf("2. Display current list\n");
    printf("3. Delete a node from current list\n");
    printf("4. Exit\n");
    int choice;
    printf("\nInput your choice --> ");
    scanf("%d", &choice);
    if ((choice < 1) || (choice > 4))
    {
        printf("\nInvalid choice ! Terminating the program !");
        return 0;
    }
    return choice;
}

struct list_item *create_item()
{
    struct list_item *item = (struct list_item *)malloc(sizeof(struct list_item));
    printf("Input data for the item --> ");
    scanf("%d", &(item->data));
    item->next = NULL;
    item->previous = NULL;
    return item;
}

void create_list(struct list_item *item)
{
    if (!start)
    {
        start = end = item;
        printf("\n");
        return;
    }
    end->next = item;
    item->previous = end;
    end = item;
    printf("\n");
    return;
}

void display_list()
{
    if (!start)
    {
        printf("!");
        printf("\n");
        return;
    }
    struct list_item *temp = start;
    printf("! ");
    while (temp)
    {
        printf("<-- %d -->", (temp->data));
        temp = temp->next;
    }
    printf(" !");
    printf("\n");
    return;
}

bool delete__node(int node__number)
{
    if (node__number < 1)
    {
        return false;
    }
    list__item *temp__node;
    if (node__number == 1)
    {
        temp__node = start;
        start = start->next;
        start->previous = NULL;
        free(temp__node);
        printf("Node deleted successfully...");
        return true;
    }
    list__item *temp__head = start;
    node__number--;
    while (node__number--)
    {
        if (!temp__head)
        {
            return false;
        }
        temp__head = temp__head->next;
    }
    if (!(temp__head->next))
    {
        temp__node = end;
        end = end->previous;
        end->next = NULL;
        free(temp__node);
        printf("Node deleted successfully...");
        return true;
    }
    temp__head->previous->next = temp__head->next;
    temp__head->next->previous = temp__head->previous;
    temp__node = temp__head;
    free(temp__node);
    printf("Node deleted successfully...");
    return true;
}