#include <stdio.h>
#include <stdlib.h>
struct charset
{
    char ch;
    int i;
} cs;

void Keyvalue(char *ch, int *i)
{
    printf("Enter a character and an integer: ");
    scanf("%c %d", ch, i);
}

int main()
{
    int j;
    // struct charset cs;
    Keyvalue(&cs.ch, &cs.i);
    printf("Character: %c\tInteger: %d\n", cs.ch, cs.i);
    return 0;
}