#include <stdio.h>

struct Book {
    int id;
    char name[50];
    int issued;
};

int main() {
    struct Book b[3] = {
        {1, "C Programming", 0},
        {2, "Data Structures", 0},
        {3, "OS", 0}
    };

    int choice, id, i;

    printf("1. Display Books\n2. Issue Book\n");
    scanf("%d", &choice);

    if(choice == 1) {
        for(i = 0; i < 3; i++) {
            printf("\nID: %d Name: %s Status: %s",
                b[i].id, b[i].name,
                b[i].issued ? "Issued" : "Available");
        }
    }
    else if(choice == 2) {
        printf("Enter Book ID to issue: ");
        scanf("%d", &id);

        for(i = 0; i < 3; i++) {
            if(b[i].id == id && b[i].issued == 0) {
                b[i].issued = 1;
                printf("Book Issued Successfully!");
                break;
            }
        }
    }

    return 0;
}