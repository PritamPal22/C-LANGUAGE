#include <stdio.h>

void Tringle_UpperLeftRightAngle(char ch, int n);
void Tringle_LowerLeftRightAngle(char ch, int n);
void Tringle_LowerRightRightAngle(char ch, int n);

int main()
{
	int i,j,n;
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


void Tringle_UpperLeftRightAngle(char ch, int n)
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = n; j >= i; j--)
        {
            if (i == 1 || j == n || j == i ) 
            {
                printf("%4c", ch);
            } 
            else
            {
                printf("    ");
            }
        }
        printf("\n\n");
    }
}

void Tringle_LowerLeftRightAngle(char ch, int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print ch only at the boundaries or bottom row
            if (j == 1 || j == i || i == n)
                printf("%4c",ch);
            else
                printf("    ");
        }
        printf("\n\n");
    }
}

void Tringle_LowerRightRightAngle(char ch, int n)
{
     for (int i = 1; i <= n; i++) 
     {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) 
        {
            printf("    ");
        }
        // Print pattern with hollow inside
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i || i == n)
                printf("%4c",ch);
            else
                printf("    ");
        }
        printf("\n\n");
    }
}