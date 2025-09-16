#include <stdio.h>

struct Point
{
    int x;
    int y;
};

void display(struct Point *p)
{
    printf("X: %d\tY: %d\n", p->x, p->y);
}

int main()
{
    struct Point p1 = {10, 20};
    struct Point p2 = {22, 2};
    display(&p1);
    display(&p2);
    return 0;
}