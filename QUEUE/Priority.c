#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
struct item {
    int data;
    int priority;
};
struct item pq[SIZE];
int count = 0;

void Enqueue(int val, int prt) {
    if(count == SIZE) {
        printf("The priority queue is full!\n");
        return;
    }
    pq[count].data = val;
    pq[count].priority = prt;
    count++;
    printf("Inserted %d with priority %d\n",val,prt);
}

void Dequeue() {
    if(count == 0) {
        printf("Priority queue is empty!\n");
        return;
    }
    int idx = 0;
    for(int i=idx;i<count-1;i++) {
        pq[i] = pq[i+1];
    }
    count--;
}

void Display() {
    if(count == 0) {
        printf("Priority queue is empty!\n");
        return;
    }
    for(int i=0;i<count;i++) {
        printf("%d, p = %d",pq[i].data,pq[i].priority);
    }
    printf("\n");
}

int main() {
    int val,prt,choice;
    printf("\n____________MENU____________\n");
    printf("1. Enqueue\n2. Dequeue\n3. Dispaly\n4. Exit\n");
    while(1) {
        printf("Enter your choice(1-4): ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d",&val);
                printf("Enter the priority: ");
                scanf("%d",&prt);
                Enqueue(val,prt);
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
            default :
                printf("Invalid choice!Try again!\n");
                break;
        }
    }
}