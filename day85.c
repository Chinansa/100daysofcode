#include <stdio.h>


enum Numbers {
    TEN = 10,
    ELEVEN,     // 11
    TWELVE,     // 12
    THIRTEEN,   // 13
    FOURTEEN    // 14
};

int main() {
    enum Numbers num;

    
    for (num = TEN; num <= FOURTEEN; num++) {
        switch (num) {
            case TEN:      printf("TEN = %d\n", num); break;
            case ELEVEN:   printf("ELEVEN = %d\n", num); break;
            case TWELVE:   printf("TWELVE = %d\n", num); break;
            case THIRTEEN: printf("THIRTEEN = %d\n", num); break;
            case FOURTEEN: printf("FOURTEEN = %d\n", num); break;
        }
    }

    return 0;
}
