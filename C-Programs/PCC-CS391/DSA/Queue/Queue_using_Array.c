#include <stdio.h>

#define N 10
int queue_arr[N];
int rear = -1;
int front = -1;

void enqueue(int item)
{
    if (rear == N - 1)
    {
        printf("\nQueue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue_arr[rear] = item;
}

int dequeue()
{
    int item;
    if (front == -1 || front == rear + 1)
    {
        printf("\nQueue Underflow\n");
        return 0;
    }
    item = queue_arr[front];
    front = front + 1;
    printf("\nElement Deleted");
    return item;
}

void display()
{
    int i;
    if (front == -1 || front == rear + 1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue is: ");
    for (i = front; i <= rear; i++)
        printf("%d  ", queue_arr[i]);
    printf("\n\n");
}

int main()
{
    int choice = 1, item;
    while (choice)
    {
        printf("\nPRESS - 1 FOR ENQUEUE\nPRESS - 2 FOR DEQUEUE\nPRESS - 3 FOR DISPLAY\nPRESS - 4 TO EXIT");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInput the element for adding in queue : ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            choice = 0;
            break;
        default:
            printf("\nWrong choice\n");
        }
    }
    return 0;
}
