#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements: ");
    for(int i = 0; i < n; i++) {
        int nextGreater = -1;
        // Look for next greater element to the right
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Stop at the first greater element
            }
        }

        printf("%d", nextGreater);
        if(i != n - 1) printf(","); // Comma separated
    }
    printf("\n");

    return 0;
}
