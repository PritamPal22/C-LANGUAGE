#include<stdio.h>

int GCD(int val1, int val2) {
    int temp;
    while(val2 != 0) {
        temp = val1 % val2;
        val1 = val2;
        val2 = temp;
    }
    return val1;
}

int main() {
    int val1, val2;
    printf("Enter the two value to calculate GCD:\n");
    scanf("%d%d",&val1,&val2);
    printf("The GCD is: %d\n",GCD(val1,val2));
}