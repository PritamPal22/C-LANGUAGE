#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* head;
    struct node* tail;
};

void Insert(int val) {

}
int Dekete() {

}

void Display() {

}

int main() {
    int val,pos,choice;
    printf("\n____________MENU____________\n");
    printf("Enter your choice(1-4)\n1. For Insert any position\n2. Delete from any position\n3. Display\n4. Exit\n");
    scanf("%d",&choice);
    while(1) {
        switch(choice) {
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d",&val);
                printf("Enter position where inserted: ");
                scanf("%d",&pos);
                Insert();
                break;
            case 2:
                printf("Enter position where Deleted: ");
                scanf("%d",&pos);
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default :
                printf("Wrong Input!\nTry again.");
                break;
        }
    }
}