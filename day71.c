#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Take input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Create and open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Write to file using fprintf
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}
