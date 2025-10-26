#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100
int top = -1;
char stack[size];

void push(char pushed) {
    if (top < size - 1) {
        stack[++top] = pushed;
    }
}

char pop() {
    if(top >= 0) {
        return stack[top--];
    }
    return '\0';
}

int isBalanced(char *exp) {
    for(int i=0;i<strlen(exp);i++) {
        char pushed = exp[i];
        if(pushed == '('||pushed == '{'||pushed =='[') {
            push(pushed);
        } 
        else if (pushed == ')'||pushed == '}'||pushed ==']') {
            if(top == -1)
                return 0;
            char popped = pop();
            if((pushed == ')' && popped != '(') || (pushed == '}' && popped != '{') || (pushed == ']' && popped != '[')) {
                return 0;
            }
        }
    }
    return (top == -1);
}

int main() {
    // char expression[size];
    // printf("Enter expression: ");
    // scanf("%s",expression);
    char expression[] = "a+(b)-c[a-n{k-w(a+n)}]";

    if(isBalanced(expression))
        printf("The parenthesis is Balanced.\n");
    else    
        printf("The parenthesis is not Balanced.\n");
    return 0;
}