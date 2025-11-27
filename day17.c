Q33: 

#include <stdio.h>
#include <math.h>     

int main() {
    int n, original, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");        
    scanf("%d", &n);                 

    original = n;                       

    
    int temp = n;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);  
        temp = temp / 10;
    }

    
    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
Q34: 

#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");   
    scanf("%d", &n);              

    
    if (n <= 1) {
        printf("Not prime");
    } 
    else {
        for (i = 2; i <= n / 2; i++) {   
            if (n % i == 0) {            
                count = 1;              
                break;                
            }
        }

        
        if (count == 0)
            printf("Prime");
        else
            printf("Not prime");
    }

    return 0;
}
