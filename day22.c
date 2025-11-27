Q43: 

#include <stdio.h>

int main() {
    int n, temp, rem, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   


    while (n > 0) {
        rem = n % 10;    

        
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }

    
        sum = sum + fact;

        n = n / 10;       
    }

    
    if (sum == temp)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
Q44: 
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, numerator = 1.0, denominator = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
