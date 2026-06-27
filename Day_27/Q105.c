#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice;

    do {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Marks:\n");
                scanf("%d %s %f", &s[n].id, s[n].name, &s[n].marks);
                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Marks: %.2f\n",
                        s[i].id, s[i].name, s[i].marks);
                }
                break;
        }
    } while(choice != 3);

    return 0;
}