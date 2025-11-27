Q29: 

#include <stdio.h>

int main() {
    int n;
    int fact = 1;                           

    printf("Enter a number: ");               
    scanf("%d", &n);                          

    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);            

    return 0;                               
}
Q30:

#include <stdio.h>

int main() {
    int n, reverse = 0, digit;              

    printf("Enter a number: ");               
    scanf("%d", &n);                          

    
    while (n != 0) {
        digit = n % 10;                      
        reverse = reverse * 10 + digit;     
        n = n / 10;                        
    }

    printf("Reversed number = %d", reverse);   

    return 0;                            
}
