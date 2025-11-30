#include <stdio.h>


enum Status {
    SUCCESS = 1,  
    FAILURE,       
    TIMEOUT = 5,   
    UNKNOWN        
};

int main() {
    
    printf("Enum Values:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("UNKNOWN = %d\n", UNKNOWN);

    return 0;
}
