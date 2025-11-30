#include <stdio.h>


enum Status {
    SUCCESS,  // 0
    FAILURE,  // 1
    TIMEOUT   // 2
};

int main() {
    enum Status code;

    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch (code) {
            case SUCCESS:
                printf("SUCCESS: Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE: Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT: Operation timed out.\n");
                break;
        }
    }

    return 0;
}
