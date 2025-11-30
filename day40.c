#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal of the matrix:\n");

    for (int d = 0; d < m + n - 1; d++) {
        int row, col;
        if (d < n) {
            row = 0;
            col = d;
        } else {
            row = d - n + 1;
            col = n - 1;
        }

        while (row < m && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

   
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
