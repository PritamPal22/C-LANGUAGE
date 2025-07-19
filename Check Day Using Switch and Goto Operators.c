#include<stdio.h>
int main()
{
	int Day;
	read:
	printf("Enter Day (1-7):");
	scanf("%d",&Day);
	switch(Day)
	{
		case 1 : printf("Monday");
		break;
		case 2 : printf("Twesday");
		break;
		case 3 : printf("Wednesday");
		break;
		case 4 : printf("Thrusday");
		break;
		case 5 : printf("Friday");
		break;
		case 6 : printf("Saterday");
		break;
		case 7 : printf("sunday");
		break;
		default : printf("Please Enter a Valid Number Between(1-7)\n");
		goto read;
	} 
    return 0;	
}