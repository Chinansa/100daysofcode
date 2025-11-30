#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "numbers.txt";
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read integers from file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return 1;
    }

    // Compute average
    average = (float)sum / count;

    // Print results
    printf("Sum of integers: %d\n", sum);
    printf("Average of integers: %.2f\n", average);

    return 0;
}
