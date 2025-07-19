#include <stdio.h>
int main()
{
    int i,j,rows, cols;

    // Getting the table dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int table[rows][cols];

    // Input values into the table
    printf("Enter the elements of the table:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &table[i][j]);
        }
    }

    // Finding the maximum value
    int max = table[0][0];  // Assume the first element is the maximum initially
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            if (table[i][j] > max) 
			{
                max = table[i][j];
            }
        }
    }

    // Displaying the maximum value
    printf("The maximum value in the table is: %d\n", max);

    return 0;
}
