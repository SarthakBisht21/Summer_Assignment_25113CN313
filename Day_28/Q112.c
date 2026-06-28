#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice;

    do {
        printf("\n1. Add Contact\n2. Display Contacts\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name and Phone: ");
                scanf("%s %s", c[n].name, c[n].phone);
                n++;
                break;

            case 2:
                for(int i=0;i<n;i++)
                    printf("Name: %s Phone: %s\n",
                        c[i].name, c[i].phone);
                break;
        }
    } while(choice != 3);

    return 0;
}