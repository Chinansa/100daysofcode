#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}




#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    max = min = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

