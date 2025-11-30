#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    // Calculate prefix products
    int prefix[n];
    prefix[0] = 1; // No elements to the left of first element
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] * nums[i-1];

    // Calculate suffix products and final answer
    int suffix = 1; // No elements to the right of last element
    for(int i = n-1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    // Print the answer array
    printf("Product array: ");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("\n");

    return 0;
}
