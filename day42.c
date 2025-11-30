#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        
        else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}





#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

   
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

