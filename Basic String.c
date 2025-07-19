#include<stdio.h>
int CountLength(char A[]);
void PrintString(char A[]);
int main()
{
    char Sentense[100];
    printf("Enter the Sentence:");
    fgets(Sentense,100,stdin);
    printf("Length is %d\n",CountLength(Sentense));
    PrintString(Sentense);
    return 0;
}

int CountLength(char A[])
{
    char space;
    int Count = 0;
    for(int i=0;A[i]!= '\0';i++)
    {
        Count ++;
    }
    return Count;
}
    
void PrintString(char A[])
{
    for(int i=0;A[i] != '\0';i++)
    {
        printf("%c",A[i]);
    }
}