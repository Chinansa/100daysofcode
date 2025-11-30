#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    int i;
    // Print the first character of the first word
    if(name[0] != ' ')
        printf("%c", toupper(name[0]));

    // Loop through the string to find spaces
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline

    char *word;
    char *lastWord = NULL;

    // First, find the last word (surname)
    word = strtok(name, " ");
    while(word != NULL) {
        lastWord = word;
        word = strtok(NULL, " ");
    }

    // Reset strtok by copying the name again
    char temp[100];
    strcpy(temp, name);
    word = strtok(temp, " ");

    // Print initials of all words except the last
    while(word != NULL) {
        if(word != lastWord) {
            printf("%c", toupper(word[0]));
        } else {
            printf(" %s", lastWord); // Print surname in full
        }
        word = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}



























