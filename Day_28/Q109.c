#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    int issued;
};

int main() {
    struct Book b[100];
    int n = 0, choice, id;

    do {
        printf("\n1. Add Book\n2. Issue Book\n3. Display Books\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID and Name: ");
                scanf("%d %s", &b[n].id, b[n].name);
                b[n].issued = 0;
                n++;
                break;

            case 2:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                for(int i = 0; i < n; i++) {
                    if(b[i].id == id && b[i].issued == 0) {
                        b[i].issued = 1;
                        printf("Book Issued\n");
                    }
                }
                break;

            case 3:
                for(int i = 0; i < n; i++) {
                    printf("ID: %d Name: %s Status: %s\n",
                        b[i].id, b[i].name,
                        b[i].issued ? "Issued" : "Available");
                }
                break;
        }
    } while(choice != 4);

    return 0;
}