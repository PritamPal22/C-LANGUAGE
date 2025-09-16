#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
struct node *createNode(int val) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}
void InsertAtEnd(struct node *ptr, int val)
{
    struct node *newnode = createNode(val);
    ptr->next = newnode;
    ptr = ptr->next;
}
void Display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int val;
    struct node *head = malloc(sizeof(struct node));
    head->data = val;
    head->next = NULL;
    struct node *ptr = head;
    while (1)
    {
        printf("Enter a value to insert at end (-1 to stop): ");
        scanf("%d", &val);
        if (val == -1)
        {
            break;
        }
        InsertAtEnd(ptr, val);
        Display(head);
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
    }
}