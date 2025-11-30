#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Function to sort a string
void sortString(char str[]) {
    int i, j;
    char temp;
    int n = strlen(str);
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    // Convert both strings to lowercase (optional, for case-insensitive check)
    for(int i=0; str1[i]; i++) str1[i] = tolower(str1[i]);
    for(int i=0; str2[i]; i++) str2[i] = tolower(str2[i]);

    // If lengths differ, they can't be anagrams
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Compare sorted strings
    if(strcmp(str1, str2) == 0)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}




#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline

    char *word = strtok(sentence, " "); // Split sentence into words
    while(word != NULL) {
        int len = strlen(word);
        if(len > maxLength) {
            maxLength = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}
