#include<stdio.h>
//#include<math.h>

int main()
{
	float a;
	int b;
	printf("Enter the Number a,b:");
	scanf("%f%d",&a,&b);
	//float X=pow(a,b);
	int X=1;
	for(int i=1;i<=b;i++)
	{
		X=X*a;
	}
	printf("The value is %d",X);
    return 0;	
}

