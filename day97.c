#include <stdio.h>
#include <stdlib.h>


struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    FILE *file;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

   
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp.name);
        printf("Employee ID: ");
        scanf("%d", &emp.emp_id);
        printf("Salary: ");
        scanf("%f", &emp.salary);
        printf("Joining date (day month year): ");
        scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    fclose(file);

    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployee Details from File:\n");
    printf("Name\t\tID\tSalary\tJoining Date\n");

  
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("%s\t%d\t%.2f\t%02d/%02d/%04d\n",
               emp.name, emp.emp_id, emp.salary,
               emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    }

    fclose(file);
    return 0;
}
