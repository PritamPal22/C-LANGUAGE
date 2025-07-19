#include<stdio.h>

int main()
{
	int A;
	
	read:
	printf("Enter the number : ");
	scanf("%d",&A);
	
	if(A%2==0)
	{
		printf("The number is even\n");	
	}
	else
	{
		printf("The number is odd\n");
   	}
    if(A<99999999)
	goto read;
return 0;	

}





