#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;

// Create new node
struct node* CreateNode(int val) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

// Insert at beginning
void InsertAtBeginning(int val) {
    struct node *newnode = CreateNode(val);
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
        return;
    }
    struct node *current = head;
    while (current->next != head) { 
        current = current->next;
    }
    newnode->next = head;
    current->next = newnode;
    head = newnode;
}

// Delete from beginning
void DeleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (head->next == head) { // only one node
        free(head);
        head = NULL;
        return;
    }
    struct node *current = head, *last = head;
    while (last->next != head) {
        last = last->next;
    }
    head = head->next;
    last->next = head;
    free(current);
}

// Insert at end
void InsertAtEnd(int val) {
    struct node *newnode = CreateNode(val);
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
        return;
    }
    struct node *current = head;
    while (current->next != head) {
        current = current->next;
    }
    current->next = newnode;
    newnode->next = head;
}

// Delete from end
void DeleteFromEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (head->next == head) { // only one node
        free(head);
        head = NULL;
        return;
    }
    struct node *current = head, *prev = NULL;
    while (current->next != head) {
        prev = current;
        current = current->next;
    }
    prev->next = head;
    free(current);
}

// Insert at any position
void InsertAtAnyPosition(int val, int pos) {
    if (pos == 1) {
        InsertAtBeginning(val);
        return;
    }
    struct node *newnode = CreateNode(val);
    struct node *current = head;
    for (int i = 1; i < pos - 1; i++) {
        current = current->next;
        if (current == head) {
            printf("Invalid Position!!\n");
            return;
        }
    }
    newnode->next = current->next;
    current->next = newnode;
}

// Delete from any position
void DeleteFromAnyPosition(int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (pos == 1) {
        DeleteFromBeginning();
        return;
    }
    struct node *current = head;
    for (int i = 1; i < pos - 1; i++) {
        current = current->next;
        if (current->next == head) {
            printf("Invalid Position!!\n");
            return;
        }
    }
    struct node *current = current->next;
    current->next = current->next;
    free(current);
}

// Display the list
void Display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *current = head;
    printf("The elements in the Circular Linked List are:\n");
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(back to head)\n");
}

// Main function
int main() {
    int val, pos, choice;
    printf("------ MENU ------\n");
    printf("1. Insert in Beginning\n2. Delete from Beginning\n3. Insert at End\n4. Delete from End\n");
    printf("5. Insert at any position\n6. Delete from any position\n7. Display\n8. Exit\n");

    while (1) {
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &val);
            InsertAtBeginning(val);
            Display();
            break;
        case 2:
            DeleteFromBeginning();
            Display();
            break;
        case 3:
            printf("Enter the value: ");
            scanf("%d", &val);
            InsertAtEnd(val);
            Display();
            break;
        case 4:
            DeleteFromEnd();
            Display();
            break;
        case 5:
            printf("Enter the value and position to insert: ");
            scanf("%d %d", &val, &pos);
            InsertAtAnyPosition(val, pos);
            Display();
            break;
        case 6:
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            DeleteFromAnyPosition(pos);
            Display();
            break;
        case 7:
            Display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice!! Enter a valid choice (1-8)\n");
            break;
        }
    }
    return 0;
}