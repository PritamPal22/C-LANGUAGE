#include<stdio.h>
int main()
{
    int S,E,i,j,P;
    printf("Enter the Start and End Range: ");
    scanf("%d %d",&S,&E);
    printf("Prime Numbers between %d and %d are:\n",S,E);
    for(i=S;i<=E;i++)
    {
        if(i<2)
        continue;
        P = 1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                P = 0;
                break;
            }
        }
        if(P)
        {
            printf("%d\t",i);
        }
    } 
    printf("\n");
    return 0;	
}
