#include<stdio.h>
#include<math.h>

int main()
{
	int M;
    read:
	printf("Enter the Mark:");
	scanf("%d",&M);
	
	if(M>90&&M<=100)
	{
	printf("The Percentage is A+\n");
    }
	else if(M>80&&M<=90)
	{
	printf("The Percentage is A\n");
    }
    else if(M>70&&M<=80)
	{
	printf("The Percentage is B+\n");
    }
    else if(M>60&&M<=70)
	{
	printf("The Percentage is B\n");
    }
    else if(M>50&&M<=60)
	{
	printf("The Percentage is C+\n");
    }
    else if(M>40&&M<=50)
	{
	printf("The Percentage is D\n");
    }
    else if(M<40)
	{
	printf("The Candidate is FAIL\n");
    }
    else if(M=40)
	{
	printf("The Candidate is PASS\n");
    }
    goto read;
    	
return 0;	

}
