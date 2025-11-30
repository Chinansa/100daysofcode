#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;          
    struct Student *ptr = &s;  
    printf("Enter student's name: ");
    scanf(" %[^\n]", ptr->name);  
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
    ptr->marks += 5;

    printf("\nStudent Details after modification:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
