#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} ;
struct node* head;

struct node *CreateNode(int val) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void Reverse() {
    struct node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void InsertAtAnyPosition(int val, int pos) {
    struct node *newnode = CreateNode(val);
    if (pos == 1) {
        if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    }
    struct node *current = head;
    for (int i = 1; current != NULL && i < pos - 1; i++) {
        current = current->next;
        if (current == NULL) {
            printf("Invalid Position!!");
            return;
        }
    }
    newnode->next = current->next;
    current->next = newnode;
}

void Display() {
    struct node *current = head;
    if (head == NULL) {
        printf("Link List is epmty.\n");
    }
    else {
        printf("The elements in the link list are: \n");
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
}
int main() {
    struct node* head = NULL;
    InsertAtAnyPosition(10, 1);
    InsertAtAnyPosition(20, 2);
    InsertAtAnyPosition(30, 3);         
    InsertAtAnyPosition(40, 4);
    InsertAtAnyPosition(50, 5);
    Display();
    Reverse();
    printf("After Reversing the link list:\n");
    Display();
    return 0;
}