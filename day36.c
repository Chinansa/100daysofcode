#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add element to sum
        }
    }

    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}
