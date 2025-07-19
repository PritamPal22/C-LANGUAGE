#include <stdio.h>
#include <string.h>

#define MAX 256  // Number of ASCII characters

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str); // Read a single word without spaces

    int n = strlen(str);
    int lastIndex[MAX];   // Stores the last index of each character
    for (int i = 0; i < MAX; i++)
        lastIndex[i] = -1;

    int maxLen = 0;        // Length of longest substring
    int start = 0;         // Start index of current window
    int startIndex = 0;    // Start index of longest substring

    for (int i = 0; i < n; i++) {
        // If the character was seen before and is inside the current window
        if (lastIndex[(unsigned char)str[i]] >= start) {
            start = lastIndex[(unsigned char)str[i]] + 1;
        }

        lastIndex[(unsigned char)str[i]] = i;

        // Update maximum length
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
            startIndex = start;
        }
    }

    // Print result
    printf("Longest substring without repeating characters: ");
    for (int i = startIndex; i < startIndex + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
