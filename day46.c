#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
           str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i]; // Add non-vowel character
        }
    }

    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s\n", result);

    return 0;
}




#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; // To store frequency of lowercase letters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') { // Check if lowercase
            freq[str[i] - 'a']++; // Increment frequency

            if(freq[str[i] - 'a'] == 2) { // First time it repeats
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
