#include<stdio.h>

void Tringle_UpperLeftRightAngle(char ch, int n);
void Tringle_LowerLeftRightAngle(char ch, int n);
void Tringle_LowerRightRightAngle(char ch, int n);

int main()
{
	int i,j,n;
	//char ch='*';
	char ch;
	printf("Enter symboll that you use: ");
	scanf("%c",&ch);
	printf("Enter the terns:");
	scanf("%d",&n);
	
   Tringle_UpperLeftRightAngle(ch, n);
   Tringle_LowerLeftRightAngle(ch, n);
   Tringle_LowerRightRightAngle(ch, n);     
return 0;
}

//UPPER LEFT RIGHT ANGLE TRINGLE
void Tringle_UpperLeftRightAngle(char ch, int n)
{
	while(n>0)
	{
		n--;
		for(int i=n+1;i>=1;i--)
		{
			printf("%4c",ch);	
		}
		printf("\n\n");
	}
}

//LEFT RIGHT ANGLE TRINGLE
void Tringle_LowerLeftRightAngle(char ch, int n)
{
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
	{
		printf("%4c",ch);		
	}
	printf("\n\n");
    }
}

//RIGHT RIGHT ANGLE TRINGLE
void Tringle_LowerRightRightAngle(char ch, int n)
{
	for(int i=1;i<=n;i++)
	{
		for(char space=1;space<=n-i;space++)
		{
			printf("    ");
		}
		for( int j=1;j<=i;j++)
		{
			printf("%4c",ch);
		}
		printf("\n\n");		
    }
}