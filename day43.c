#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Reversed string: ");
 
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}



#include <stdio.h>

int main() {
    char str[100];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); x

    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

