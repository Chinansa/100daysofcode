#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[200];

    // Input string
    fgets(str, sizeof(str), stdin);

    // Open file to write original string
    fp = fopen("input.txt", "w");
    fputs(str, fp);
    fclose(fp);

    // Reopen file to read and convert
    fp = fopen("input.txt", "r");
    fgets(str, sizeof(str), fp);
    fclose(fp);

    // Convert to sentence case
    int i = 0;
    int start = 1; // marks start of a sentence

    while (str[i] != '\0') {
        if (start && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            start = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            start = 1; // next character starts a new sentence
        }
        i++;
    }

    // Save output in file
    fp = fopen("output.txt", "w");
    fputs(str, fp);
    fclose(fp);

    printf("%s", str);

    return 0;
}
