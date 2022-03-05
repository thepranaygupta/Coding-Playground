#include <stdio.h>
#include <malloc.h>

struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node N;
N *start = NULL, *tmp, *ptr;

void CreateList()
{
    tmp = (N *)malloc(sizeof(N));
    printf("Enter value : ");
    scanf("%d", &tmp->val);
    tmp->next = NULL;
    if (start == NULL)
    {
        ptr = tmp;
        start = tmp;
        tmp->prev = NULL;
    }
    else
    {
        ptr->next = tmp;
        tmp->prev = ptr;
        ptr = tmp;
    }
}

void DisplayList()
{
    tmp = start;
    while (tmp->next != NULL)
    {
        printf("%d -> ", tmp->val);
        tmp = tmp->next;
    }
    while (tmp != NULL)
    {
        printf("%d <- ", tmp->val);
        tmp = tmp->prev;
    }
}
void DeleteAny()
{
    int n;
    printf("Enter value to delete : ");
    scanf("%d", &n);
    tmp = start;
    while (tmp->next->val != n)
    {
        tmp = tmp->next;
    }
    ptr = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->next->prev = tmp;
    free(ptr);
}

int main()
{
    int ch;
    do
    {
        printf("\n1. Create List.");
        printf("\n2. Display List.");
        printf("\n3. Delete Any node.");
        printf("\n0. Exit.");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nEnd of Program\n");
            break;
        case 1:
            CreateList();
            break;
        case 2:
            DisplayList();
            break;
        case 3:
            DeleteAny();
            break;
        default:
            printf("\nInvalid Choice!!\n");
        }
    } while (ch != 0);
    return 0;
}
