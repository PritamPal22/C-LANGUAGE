#include<stdio.h>
int main()
{
	int a,b;//,c;
	printf("Enter the value of a and b");
	scanf("%d\n",&a);
	scanf("%d",&b);
	//a=a-b;
	//b=b+a;
	//a=b-a;

	a=a+b;
	b=a-b;
	a=a-b;

//	c = a+b;
//	b= c-b;
//	a=c-a;
	printf("%d \n", a);
		printf("%d \n", b);
	return 0;
}
