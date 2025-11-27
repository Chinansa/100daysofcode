Q35: 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: "); 
    scanf("%d", &n);            

    printf("Factors: ");

    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {     
            printf("%d ", i);
        }
    }

    return 0;
}
Q36: 
#include <stdio.h>

int main() {
    int a, b, i, hcf;

    printf("Enter two numbers: ");  
    scanf("%d %d", &a, &b);


    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {  
            hcf = i;                    
        }
    }

    
    printf("%d", hcf);

    return 0;
}
