#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0;
    int digits = 0, specialChars = 0;
    int uppercase = 0, lowercase = 0;
    int tabs = 0, spaces = 0, words = 0, lines = 0;

    int inWord = 0;

    printf("Enter text (Ctrl+D to end input on Linux/Mac, Ctrl+Z on Windows):\n");

    while ((ch = getchar()) != EOF) {
        // Vowel and consonant check
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        // Digit check
        if (isdigit(ch))
            digits++;
        
        // Special character check
        if (!isalnum(ch) && !isspace(ch))
            specialChars++;

        // Case check
        if (isupper(ch))
            uppercase++;
        if (islower(ch))
            lowercase++;

        // Tabs and spaces
        if (ch == '\t')
            tabs++;
        if (ch == ' ')
            spaces++;

        // Line count
        if (ch == '\n')
            lines++;

        // Word count
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    printf("\nResults:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    printf("Uppercase Letters: %d\n", uppercase);
    printf("Lowercase Letters: %d\n", lowercase);
    printf("Tabs: %d\n", tabs);
    printf("Spaces: %d\n", spaces);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
