#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char newDate[20];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0'; // Remove newline

    char day[3], month[3], year[5];

    // Extract day, month, year
    sscanf(date, "%2[^/]/%2[^/]/%4s", day, month, year);

    // Replace month "04" with "Apr"
    if(strcmp(month, "04") == 0) {
        strcpy(month, "Apr");
    }

    // Format new date
    sprintf(newDate, "%s-%s-%s", day, month, year);

    printf("Date in new format: %s\n", newDate);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    int len = strlen(str);

    printf("All substrings of '%s':\n", str);

    // Loop over all possible starting indices
    for (int start = 0; start < len; start++) {
        // Loop over all possible ending indices
        for (int end = start; end < len; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
