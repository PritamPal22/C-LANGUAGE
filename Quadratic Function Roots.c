#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
    int k=(b*b)-(4*a*c);
//    printf("%f",sqrt(k));
    r1=(-b+sqrt(k))/(2*a);
    r2=(-b-sqrt(k))/(2*a);
    
    
    if(k>=0)
	{
        printf("Roots are %f %f",r1,r2);
    	
	}
    else
    {
    	printf("Roots are  is imaginary");
	}
return 0;	
}

