#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push() {
    int val;
    if (top == MAX - 1) {
        printf("Stack is full! Cannot push.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("%d pushed onto stack.\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty! Cannot pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}