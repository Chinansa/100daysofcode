#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {   
        isPrime = 1;             

        for (j = 2; j * j <= i; j++) {   
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}




#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    


