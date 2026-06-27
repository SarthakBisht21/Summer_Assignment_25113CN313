#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main() {
    struct Employee e[100];
    int n = 0, choice;

    do {
        printf("\n1. Add Employee Salary\n2. Display Salaries\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Basic Salary:\n");
                scanf("%d %s %f", &e[n].id, e[n].name, &e[n].basic);

                e[n].hra = 0.2 * e[n].basic;
                e[n].da  = 0.1 * e[n].basic;
                e[n].total = e[n].basic + e[n].hra + e[n].da;

                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Total Salary: %.2f\n",
                        e[i].id, e[i].name, e[i].total);
                }
                break;
        }
    } while(choice != 3);

    return 0;
}