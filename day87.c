#include <stdio.h>
enum UserRole {
    ADMIN,  // 0
    USER,   // 1
    GUEST   // 2
};

int main() {
    enum UserRole role;
    printf("Enter your role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &role);
    switch (role) {
        case ADMIN:
            printf("Welcome ADMIN! You have full access.\n");
            break;
        case USER:
            printf("Welcome USER! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome GUEST! You have view-only access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
