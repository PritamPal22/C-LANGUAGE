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