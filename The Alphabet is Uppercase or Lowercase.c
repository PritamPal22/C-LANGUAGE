#include<stdio.h>

int main()
{
	char P;
	read:
	printf("Enter Alphabet:");
	scanf("%c",&P);
	if(P>='A' && P<='Z')
	{
	    printf("The Alphabet is Uppercase latter\n");
	}
	else if(P>='a' && P<='z')
	{
		printf("The Alphabet is Lowercase latter\n");	
	}
    goto read;
return 0;	

}
