Q41: 
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;                  
    last = n % 10;                

    
    digits = (int)log10(n);

    
    first = n / pow(10, digits);

    
    n = n % (int)pow(10, digits);

    
    n = n / 10;


    swapped = last * pow(10, digits) + n * 10 + first;

    printf("%d", swapped);

    return 0;
}
Q42: 

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);


    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i; 
    }

    
    if (sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
