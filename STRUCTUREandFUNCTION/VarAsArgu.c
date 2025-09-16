#include <stdio.h>
struct point
{
    int x;
    int y;
} p1 = {10, 20}, p2 = {22, 2};
void display(struct point p)
{
    printf("X: %d\tY: %d\n", p.x, p.y);
}
int main()
{
    // struct point p1 = {10, 20};
    // struct point p2 = {22, 2};
    display(p1);
    display(p2);
    return 0;
}