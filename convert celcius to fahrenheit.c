#include<stdio.h>
int main()
//convert celcius to fahrenheit
{
	float C,F;
	float a=9.0/5;
	printf("celcius degree equal to: "); 
	scanf("%f",&C);
	F=(C*a)+32;
	printf("F is %f", F);
return 0;
}