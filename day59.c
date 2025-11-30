#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 0;
    }

    int maxSum = 0, windowSum = 0;

    // Calculate sum of first window of size k
    for(int i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;

    // Slide the window
    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i]; // remove first element, add new element
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
