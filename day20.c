Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, rem, product = 1, hasOdd = 0;

    printf("Enter a number: ");   
    scanf("%d", &n);


    while (n > 0) {
        rem = n % 10;            
        if (rem % 2 != 0) {      
            product = product * rem;
            hasOdd = 1;        
        }
        n = n / 10;           
    }

    
    if (hasOdd == 0)
        product = 1;

    
    printf("%d", product);

    return 0;
}
Q40: 

#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];  
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);   

    
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1'; 
        else if (binary[i] == '1')
            binary[i] = '0';   
    }

    
    printf("%s", binary);

    return 0;
}
