#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    // Take file name from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // File exists → read and display content
    printf("\n--- File Content ---\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
