#include <stdio.h>
#include <string.h>

// Function to match pattern with string
int matchPattern(const char *pattern, const char *str) {
    // If both pattern and string are finished
    if (*pattern == '\0' && *str == '\0')
        return 1;

    // If pattern contains '*'
    if (*pattern == '*') {
        // Try to match '*' with zero or more characters
        return matchPattern(pattern + 1, str) || (*str && matchPattern(pattern, str + 1));
    }

    // If pattern contains '?', or characters match
    if (*pattern == '?' || *pattern == *str)
        return matchPattern(pattern + 1, str + 1);

    // If characters do not match
    return 0;
}

int main() {
    char pattern[100], input[100];

    printf("Enter pattern (use ? for single and * for multiple characters): ");
    scanf("%s", pattern);

    printf("Enter string to match: ");
    scanf("%s", input);

    if (matchPattern(pattern, input))
        printf("✅ Pattern matches the string.\n");
    else
        printf("❌ Pattern does not match the string.\n");

    return 0;
}