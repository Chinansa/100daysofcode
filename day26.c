#include <stdio.h>

int main() {
    int i, j, spaces, start;

    for (i = 5; i >= 1; i--) {
       
        for (spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }

        
        start = i;

        
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 1; i++) {      
        for (j = 1; j <= 1; j++) {  
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

