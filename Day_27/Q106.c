#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int n = 0, choice;

    do {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Salary:\n");
                scanf("%d %s %f", &e[n].id, e[n].name, &e[n].salary);
                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n",
                        e[i].id, e[i].name, e[i].salary);
                }
                break;
        }
    } while(choice != 3);

    return 0;
}