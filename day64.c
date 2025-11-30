#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0};  // To track character occurrences
        int currLen = 0;

        for(int j = i; j < n; j++) {
            if(freq[(int)s[j]] == 1)
                break; // Repeated character found

            freq[(int)s[j]] = 1;
            currLen++;

            if(currLen > maxLen)
                maxLen = currLen;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
