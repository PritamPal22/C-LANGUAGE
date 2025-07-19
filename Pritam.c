#include<stdio.h>
int main()
{
    //int a=5;
    //printf("%d%d%d%d",++a,a--,--a,a++);
    //int a=5;
    //int b= ++a + a++ + --a;
    //printf("%d",b);
    //printf("%d\t%d\t%d\t%d",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
    /*int a,b;
    printf("Enter the numbers a,b: ");
    scanf("%d%d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a=%d\tb=%d\n",a,b);*/
        int a=0,i=0;
        for(i=0;i<5;i++)
        {
            if(i==2)
            break;
            a++;  
        }
        printf("%d",a);
    return 0;
}