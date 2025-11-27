Q37: 

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b);

    
    max = (a > b) ? a : b;

    
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d", max); 
            break;            
        }
        max++;  
    }

    return 0;
}
Q38: 
#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    printf("Enter a number: ");   
    scanf("%d", &n);

    
    while (n > 0) {
        rem = n % 10;    
        sum = sum + rem;  
        n = n / 10;      
    }

    
    printf("%d", sum);

    return 0;
}
