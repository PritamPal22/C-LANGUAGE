#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,rows,cols;
	//getting the matrix dimensions
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of cols:");
	scanf("%d",&cols);
	int matrix1[rows][cols],matrix2[rows][cols],sum[rows][cols];
	//Input for first matrix
	printf("Enter elements of matrix1:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		printf("Element [%d][%d]:",i+1,j+1);
		scanf("%d",&matrix1[i][j]);
	    }
	}
			//Input for second matrix
	printf("Enter elements of second matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		printf("Element [%d][%d]:",i+1,j+1);
		scanf("%d",&matrix2[i][j]);
	    }
	}
	//Adding the two matrix
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			sum[i][j]=matrix1[i][j] + matrix2[i][j];
		}
	}
	//Dispalying the result
	printf("Sum of the matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%4d",sum[i][j]);
		}
		printf("\n\n");
	}
return 0;
}
