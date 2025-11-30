#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file to write student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input and store student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s.name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write record to file
        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    // Open file to read and display records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records from file:\n");
    printf("Name\tRoll\tMarks\n");

    // Read and display records
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    return 0;
}
