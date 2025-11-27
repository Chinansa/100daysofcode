Q27: 
#include <stdio.h>

int main() {
    int n, sum = 0;                        

    printf("Enter n: ");                      
    scanf("%d", &n);                          

    
    for (int i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);               
    }

    printf("Sum = %d", sum);                 

    return 0;                               
}
Q28: 
#include <stdio.h>

int main() {
    int n;
    int product = 1;                       

    printf("Enter n: ");                     
    scanf("%d", &n);                         

    
    for (int i = 2; i <= n; i += 2) {           
        product = product * i;
    }

    printf("Product = %d", product);             

    return 0;                                   
}
