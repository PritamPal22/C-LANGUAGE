#include <stdio.h>
//#include <stdlib.h>
#define SIZE 100
int top = -1;
int stack[SIZE];

void push(int val)
{
    if (top == SIZE - 1)
    {
        printf("Stack is overflow.\n");
        return;
    }
    stack[++top] = val;
    printf("%d is pushed in stack.\n", val);
}

int pop()
{
    if (top == -1)
    {
        printf("The stack is underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek()
{
    if (top == -1)
    {
        printf("The stack is Empty.\n");
        return -1;
    }
    printf("The peek of the stack is: %d\n", stack[top - 1]);
}

int Display()
{
    if (top == -1)
    {
        printf("The stack is Empty.\n");
        return -1;
    }
    printf("The stack elements are: \n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d--", stack[i]);
    }
    printf("\n");
}

int main()
{
    int val, choice;
    printf("\n____________MENU____________\n");
    printf("1. Push on top\n2. POP from top\n3. Peek of the stack\n4. Display\n5. Exit\n");
    while (1)
    {
        printf("Enter your choice(1-5): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to be inserted: ");
            scanf("%d", &val);
            push(val);
            Display();
            break;
        case 2:
            pop();
            Display();
            break;
        case 3:
            peek();
            Display();
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice!Try again!\n");
            break;
        }
    }
}