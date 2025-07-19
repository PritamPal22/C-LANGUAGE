#include<stdio.h>
/*void main()
{
    double k = 0;
    for(k=0.0;k<3.0;k++)
    printf("%f\t",k);
}*/
 
/*int main()
{
    int A[] = {2,3,4,6,8,4,7,4,7,9,95,4};
    int length = sizeof(A);
    printf("Length of array is %d",length/sizeof(int));
    printf("%d", sizeof(int));
    printf("%d", sizeof(float));
    printf("%d", sizeof(char));
}*/

/*int main()
{
    int x = 9;
    if(10)
    printf("%d",++x);
    else
    printf("%d",x++);
    return 0;
}*/

/*#define cal(x) x*x*x
void main()
{
    int i = 3; j;
    j = cal(i+2);
    printf("%d",j);
}*/
//Prime Numbers in a given range and Calculate Sum
/*int main()
{
    int S,E,Prime,i,j,N=0;
    printf("Enter Starting and Ending Range:");
    scanf("%d%d",&S,&E);
    for (i=S;i<=E;i++)
    {
        Prime =1;
        if(i<2)
        Prime = 0;
       for(j=2;j<=i/2;j++)
       {
            if(i%j == 0)
            {
                Prime = 0;
                break;
            }
        }
        if(Prime)
        {
            printf("%d\t",i);
            N = N+i;

        }
    }
    printf("\n%d",N);
    return 0;
}*/
 int main()
 {
    char ch;
    printf("Enter Alphabet: ");
    scanf("%c",&ch);
}