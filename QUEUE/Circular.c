#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

int isFull()
{
    return (rear + 1) % SIZE == front;
}
int isEmpty()
{
    return front == -1;
}

void Enqueue(int val)
{
    if (isFull())
    {
        printf("Queue is Full! Canont insert.\n");
        return;
    }
    else
    {
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % SIZE;
        }
        queue[rear] = val;
        printf("%d is enqueue.\n", val);
    }
}

void Dequeue()
{
    if (isEmpty())
    {
        printf("The queue is Empty.\n");
        return;
    }
    else
    {
        printf("%d dequeued.\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }
}

void Display()
{
    if (isEmpty())
    {
        printf("The queue is empty!\n");
        return;
    }
    else
    {
        printf("Queue elements: ");
        int i = front;
        while (1)
        {
            printf("%d --> ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
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