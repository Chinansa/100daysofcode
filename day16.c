Q31: 
#include <stdio.h>

int main() {
    int n, binary = 0, base = 1, rem;          

    printf("Enter a number: ");             
    scanf("%d", &n);                           

    int temp = n;                              

    
    while (n > 0) {
        rem = n % 2;                            
        binary = binary + rem * base;           
        n = n / 2;                             
        base = base * 10;                       
    }

    printf("Binary = %d", binary);              

    return 0;                                    
}
Q32: 
#include <stdio.h>

int main() {
    int n, reversed = 0, digit, original;       

    printf("Enter a number: ");               
    scanf("%d", &n);                           

    original = n;                              


    while (n != 0) {
        digit = n % 10;                      
        reversed = reversed * 10 + digit;       
        n = n / 10;                               
    }

    
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;                                  
}
