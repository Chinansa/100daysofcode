#include <stdio.h>
#include <string.h>

// Function to check if str2 is a rotation of str1
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal
    if(len1 != len2) return 0;

    // Concatenate str1 with itself
    char temp[2*len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // If str2 is a substring of temp, then it's a rotation
    if(strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if(isRotation(str1, str2))
        printf("'%s' is a rotation of '%s'\n", str2, str1);
    else
        printf("'%s' is NOT a rotation of '%s'\n", str2, str1);

    return 0;
}




#include <stdio.h>
#include <string.h>

// Function to reverse a word in-place
void reverseWord(char *start, char *end) {
    char temp;
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline

    char *word = strtok(sentence, " "); // Split sentence into words
    while(word != NULL) {
        reverseWord(word, word + strlen(word) - 1); // Reverse the word
        printf("%s ", word);
        word = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}
