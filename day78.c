#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {  // Only consider alphabetic characters
            ch = tolower(ch); // Convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Close the file
    fclose(file);

    // Print results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
