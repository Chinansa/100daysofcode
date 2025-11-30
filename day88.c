#include <stdio.h>


enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    enum Colors color;
    
    const char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};
    int totalColors = sizeof(colorNames) / sizeof(colorNames[0]);

    printf("Enum Names and their Values:\n");

    
    for (color = RED; color <= ORANGE; color++) {
        printf("%s = %d\n", colorNames[color], color);
    }

    return 0;
}
