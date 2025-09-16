#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

struct node *CreateNode(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void InsertAtBeginning(int val)
{
    struct node *newnode = CreateNode(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

void DeleteFromBeginning()
{
    if (head == NULL)
    {
        printf("Link List is empty!");
        return;
    }
    struct node *current = head;
    head = head->next;
    free(current);
}

void InsertAtEnd(int val)
{
    struct node *newnode = CreateNode(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newnode;
}

void DeleteFromEnd()
{
    if (head == NULL)
    {
        printf("Link List is epmty.\n");
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    struct node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

void InsertAtAnyPosition(int val, int pos)
{
    struct node *newnode = CreateNode(val);
    if (pos == 1)
    {
        InsertAtBeginning(val);
        return;
    }
    struct node *current = head;
    for (int i = 1; current != NULL && i < pos - 1; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            printf("Invalid Position!!");
            return;
        }
    }
    newnode->next = current->next;
    current->next = newnode;
}

void DeleteFromAnyPosition(int pos)
{
    if (head == NULL)
    {
        printf("Link List is epmty.\n");
        return;
    }
    struct node *current = head;
    if (pos == 1)
    {
        head = head->next;
        free(current);
        return;
    }
    for (int i = 1; current != NULL && i < pos - 1; i++)
    {
        current = current->next;
        if (current == NULL || current->next == NULL)
        {
            printf("Invalid Position!!");
            return;
        }
    }
    struct node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

void Display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("Link List is epmty.\n");
    }
    else
    {
        printf("The elements in the link list are: \n");
        while (current != NULL)
        {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int val, pos;
    struct node *newnode, *temp;
    printf("------MENU------\n");
    printf("1.Insert in Bigining\n2.Delete from Beginning\n3.Insert at End\n4.Delete from End\n5Insert at any position\n6.Delete from any position\n7.Display\n8.Exit\n");
    int choice;
    while (1)
    {
        printf("Enter your coice(1-8): ");
        scanf("%d", &choice);
        switch (choice)
        {
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
            scanf("%d", &val);
            scanf("%d",&pos);
            InsertAtAnyPosition(val,pos);
            Display();
            break;
        case 6:
            printf("Enter the position to delete: ");
            scanf("%d",&pos);
            DeleteFromAnyPosition(pos);
            Display();
            break;
        case 7:
            Display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice!!\nEnter a valid choice(1-8)\n");
            break;
        }
    }
    return 0;
}