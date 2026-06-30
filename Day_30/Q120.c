#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int n = 0, choice, i;

    while(1) {
        printf("\n1. Add Student\n2. Display\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll, Name, Marks: ");
                scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
                n++;
                break;

            case 2:
                for(i = 0; i < n; i++) {
                    printf("\n%d %s %.2f",
                        s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3:
                return 0;
        }
    }
}