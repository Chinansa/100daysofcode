#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Take file name from user
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // Clear newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Take text to append
    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("Text successfully appended to the file.\n");

    return 0;
}
