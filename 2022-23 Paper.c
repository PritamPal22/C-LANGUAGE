#include <stdio.h>
//#include <string.h>
//#include<math.h>
/*
void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[] = "Pritam Pal";
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
*/
/*int main()
{
    int a = 2;
    printf("%d",a--);
    printf("%d",a--);
    printf("%d",a);
}
*/
/*
void Roots(int a, int b, int c)
{
    if(b*b > 4*a*c)
    {
        float x = sqrt(b*b - 4*a*c);
        float P = (-b+x)/(2*a);
        float Q = (-b-x)/(2*a);
        printf("The two roots of quadric equation is: %f\t%f\n",P,Q);
    }
    else
    {
        printf("The Roots are imaginary.\n");
    }
}
int main()
{
    int a,b,c;
    printf("Enter a,b,c in formet of(ax2 + bx + c = 0): ");
    scanf("%d%d%d",&a,&b,&c);
    Roots(a, b, c);
}
*/
/*
int main()
{
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    if((char)a[i] == '5')
    printf("%d",a[i]);
    else
    printf("FAIL\n");
}
*/

int main()
{
    int n,i,j;
    printf("Enter Numbr of Rows = Cols: ");
    scanf("%d",&n);
    int Matrix[n][n];
    for(i=0;i<n;i++)
    {
        printf("Enter Diagonal Elements[%d][%d]:  ",i+1,i+1);
        scanf("%d",&Matrix[i][i]);
    }
    for(i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i<j)
            continue;
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&Matrix[i][j]);
            Matrix[j][i] = Matrix[i][j];
        }
    }
    printf("The Matrix is:\n");
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
}