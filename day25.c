#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 5; i >= 1; i--) {  
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
    int i, j, spaces, stars;

    for (i = 5; i >= 1; i--) {
        for (spaces = 5; spaces > i; spaces--) {
            printf(" ");
        }
        for (stars = 1; stars <= i; stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
