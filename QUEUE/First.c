#include <stdio.h>
//#include <stdlib.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty()
{
    return (front == -1 || front > rear);
}

int isFull()
{
    return (rear == SIZE - 1);
}

void Enqueue(int val)
{
    if (isFull())
    {
        printf("Queue overflow! Cannot inserted %d\n", val);
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = val;
    printf("%d Enqueued\n", val);
}

void Dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow! cannot dequeued.\n");
        return;
    }
    printf("%d is dequeueed.\n", queue[front++]);
    if (front > rear)
    {
        front = rear = -1;
    }
}

void Display()
{
    if (isEmpty())
    {
        printf("The queue is empty!\n");
        return;
    }
    printf("Queue elements are: \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d-->", queue[i]);
    }
    printf("\n");
}

int main()
{
    int val, choice;
    printf("\n____________MENU____________\n");
    printf("1. Enqueue\n2. Dequeue\n3. Dispaly\n4. Exit\n");
    while (1)
    {
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to be inserted: ");
            scanf("%d", &val);
            Enqueue(val);
            Display();
            break;
        case 2:
            Dequeue();
            Display();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!Try again!\n");
            break;
        }
    }
}