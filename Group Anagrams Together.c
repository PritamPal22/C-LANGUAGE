#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define WORD_LEN 50

// Helper function to sort characters in a string (used as anagram key)
void sortString(char *str, char *sorted) {
    strcpy(sorted, str);
    int len = strlen(sorted);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (sorted[i] > sorted[j]) {
                char temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }
}

// Main function
int main() {
    char words[MAX][WORD_LEN];
    char keys[MAX][WORD_LEN];
    int used[MAX] = {0};
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
        sortString(words[i], keys[i]);
    }

    printf("\nGrouped Anagrams:\n");
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        used[i] = 1;
        printf("[ %s", words[i]);
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && strcmp(keys[i], keys[j]) == 0) {
                printf(", %s", words[j]);
                used[j] = 1;
            }
        }
        printf(" ]\n");
    }

    return 0;
}