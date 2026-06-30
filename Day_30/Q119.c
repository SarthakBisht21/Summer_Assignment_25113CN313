#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    // Input
    for(i = 0; i < 3; i++) {
        printf("\nEnter Employee %d details\n", i+1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Output
    printf("\nEmployee Details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nID: %d\nName: %s\nSalary: %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}