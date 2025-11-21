Q11
#include <stdio.h>

int main() {
    int num;                         

    printf("Enter an integer: ");      
    scanf("%d", &num);                  

    if (num % 2 == 0)                
        printf("%d is even", num);      
    else
        printf("%d is odd", num);     

    return 0;                         
}

Q12
#include <stdio.h>

int main() {
    int num;                      

    printf("Enter an integer: ");   
    scanf("%d", &num);             

    if (num >= 0) {                    
        if (num == 0)                 
            printf("Zero");            
        else
            printf("Positive");        
    }
    else {
        printf("Negative");           
    }

    return 0;                         
}
