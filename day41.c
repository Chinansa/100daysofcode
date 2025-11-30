#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}



#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    printf("Characters of the string:\n");

   
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
