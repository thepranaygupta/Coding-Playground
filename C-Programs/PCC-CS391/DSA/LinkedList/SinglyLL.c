#include <stdio.h>
#include <malloc.h>

struct Node
{
    int val;
    struct Node *next;
};

typedef struct Node N;
N *start = NULL, *tmp, *ptr;

void createList()
{
    ptr = (N *)malloc(sizeof(N));
    printf("\nEnter value:");
    scanf("%d", &ptr->val);
    ptr->next = NULL;
    if (start == NULL)
    {
        start = ptr;
        tmp = ptr;
    }
    else
    {
        tmp->next = ptr;
        tmp = ptr;
    }
}

void displayList()
{
    tmp = start;
    while (tmp != NULL)
    {
        printf("%d->", tmp->val);
        tmp = tmp->next;
    }
    printf("\n");
}

void insertBeg()
{
    ptr = (N *)malloc(sizeof(N));
    printf("\nEnter value:");
    scanf("%d", &ptr->val);
    ptr->next = start;
    start = ptr;
}

void insertEnd()
{
    ptr = (N *)malloc(sizeof(N));
    printf("\nEnter value:");
    scanf("%d", &ptr->val);
    ptr->next = NULL;
    tmp = start;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = ptr;
}

void insertAt()
{
    int n, c = 1;
    tmp = start;
    printf("\nAfter which one to insert:");
    scanf("%d", &n);
    while (c != n)
    {
        tmp = tmp->next;
        c++;
    }
    ptr = (N *)malloc(sizeof(N));
    printf("\nEnter value:");
    scanf("%d", &ptr->val);
    ptr->next = tmp->next;
    tmp->next = ptr;
}

void searchNode()
{
    int n, flag = 0, count = 0;
    printf("\nEnter node for searching:");
    scanf("%d", &n);
    tmp = start;
    while (tmp != NULL)
    {
        count++;
        if (tmp->val == n)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }
    if (flag == 1)
        printf("\nFound at position %d\n", count);
    else
        printf("\nValue doesn't exist\n");
}

void deleteFirst()
{
    tmp = start;
    start = tmp->next;
    free(tmp);
}

void deleteLast()
{
    tmp = start;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
}

void deleteAny()
{
    int n;
    printf("\nEnter value which you want to delete:");
    scanf("%d", &n);
    tmp = start;
    if (tmp->val == n)
        deleteFirst();
    else
    {
        int flag = 0;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == n)
            {
                flag = 1;
                break;
            }
            tmp = tmp->next;
        }
        if (flag == 1)
            tmp->next = tmp->next->next;
        else
            printf("\nValue doesn't exist in the List\n");
    }
}

void reverseList()
{
    N *new;
    ptr = NULL;
    tmp = start;
    while (tmp != NULL)
    {
        new = tmp->next;
        tmp->next = ptr;
        ptr = tmp;
        tmp = new;
    }
    start = ptr;
}

void main()
{
    int ch;
    do
    {
        printf("\n...M.E.N.U...\n");
        printf("1...Create List.\n");
        printf("2...Display List.\n");
        printf("3...Insert at beginning.\n");
        printf("4...Insert at the end.\n");
        printf("5...Insert at specific position.\n");
        printf("8...Search an element.\n");
        printf("9...Delete first element.\n");
        printf("10...Delete last element.\n");
        printf("11...Delete any element.\n");
        printf("13...Reverse the List.\n");
        printf("0...EXIT.\n");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nEnd of Program\n");
            break;
        case 1:
            createList();
            break;
        case 2:
            displayList();
            break;
        case 3:
            insertBeg();
            break;
        case 4:
            insertEnd();
            break;
        case 5:
            insertAt();
            break;
        case 8:
            searchNode();
            break;
        case 9:
            deleteFirst();
            break;
        case 10:
            deleteLast();
            break;
        case 11:
            deleteAny();
            break;
        case 13:
            reverseList();
            break;
        default:
            printf("\nInvalid Input!!\n");
            break;
        }
    } while (ch != 0);
}
