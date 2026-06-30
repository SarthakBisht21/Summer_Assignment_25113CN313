#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    // Input
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i+1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Output
    printf("\nStudent Records:\n");
    for(i = 0; i < 3; i++) {
        printf("\nRoll: %d\nName: %s\nMarks: %.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}