#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("The memory is not allocated.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the integer %d: ", i);
        scanf("%d", &ptr[i]);
    }
    int m;
    printf("Enter how many integers you want to add: ");
    scanf("%d", &m);
    int *ptr1 = (int *)realloc(ptr, (n + m) * sizeof(int));
    if (ptr == NULL)
    {
        printf("The memory is not allocated.\n");
        exit(1);
    }
    for (int i = n; i < n + m; i++)
    {
        printf("Enter the integer %d: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("The integer %d : %d\n", i, ptr[i]);
    }
    free(ptr);
    ptr = NULL;

    return 0;
}