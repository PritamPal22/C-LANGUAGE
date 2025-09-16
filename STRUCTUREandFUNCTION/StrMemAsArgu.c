#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[22];
    int roll;
    int age;
    float marks;
};
void Print(char name[], int roll, int age, float marks)
{
    printf("Name: %s\tRoll: %d\tAge: %d\t\tMark: %.2f\n", name, roll, age, marks);
}
int main()
{
    struct student S1 = {"Pritam Pal", 37, 22, 93.67};
    Print(S1.name, S1.roll, S1.age, S1.marks);
    return 0;
}