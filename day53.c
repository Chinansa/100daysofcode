#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i]; // Sum of all elements
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i]; // Sum to the right of current index
        if(leftSum == rightSum) {
            pivotIndex = i;
            break; // Leftmost pivot index
        }
        leftSum += arr[i]; // Update left sum
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
