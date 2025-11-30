#include <stdio.h>

int main() {
    int i, j;

    
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}





#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    
    for (i = 1; i <= 7; i += 2) {
        spaces = (7 - i) / 2;   
        stars = i;             

        
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    
    for (i = 5; i >= 1; i -= 2) {
        spaces = (7 - i) / 2;
        stars = i;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
