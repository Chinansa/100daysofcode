#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    // Initialize visited array with 0
    for (int i = 0; i < n; i++) visited[i] = 0;

    // Read array and detect duplicate in one iteration
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        visited[arr[i]] = 1;
    }

    return 0;
}
