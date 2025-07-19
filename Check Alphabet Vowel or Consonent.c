#include <stdio.h>

int main()
{
    char al;
    while (1) // infinite loop
    {
        printf("Enter alphabet: ");
        scanf(" %c", &al);
        // Convert character to lowercase for simplified comparison
        char lower_al = (al >= 'A' && al <= 'Z') ? al + 32 : al;
        if (lower_al=='a' || lower_al=='e' || lower_al=='i' || lower_al=='o' || lower_al=='u')
        {
            printf("It is a vowel\n");
        }
        else if ((lower_al >= 'a' && lower_al <= 'z'))
        {
            printf("It is a consonant\n");
        }
        else
        {
            printf("Invalid input, not an alphabet\n");
        }
    }
    return 0;
}