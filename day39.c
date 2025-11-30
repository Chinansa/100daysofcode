#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
   
    int distinct = 1; // assume they are distinct
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { // compare each pair on diagonal
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0; // not distinct
                break;
            }
        }
        if(!distinct) break;
    }
    
    if(distinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");
    
    return 0;
}



#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
   
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of main diagonal elements = %d\n", sum);
    
    return 0;
}

