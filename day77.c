#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(in);
        return 1;
    }

    // Read character-by-character and convert
    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Check output.txt\n");

    return 0;
}
