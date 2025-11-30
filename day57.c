#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements: ");
    for(int i = 0; i < n; i++) {
        int prevGreater = -1;
        // Look for previous greater element to the left
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Stop at the first greater element
            }
        }

        printf("%d", prevGreater);
        if(i != n - 1) printf(","); // Comma separated
    }
    printf("\n");

    return 0;
}
