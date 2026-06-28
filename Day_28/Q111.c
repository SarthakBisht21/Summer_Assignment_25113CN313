#include <stdio.h>

struct Ticket {
    int seat;
    int booked;
};

int main() {
    struct Ticket t[10];
    int choice, seat;

    for(int i=0;i<10;i++) {
        t[i].seat = i+1;
        t[i].booked = 0;
    }

    do {
        printf("\n1. Book Ticket\n2. View Seats\n3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter seat number (1-10): ");
                scanf("%d", &seat);
                if(t[seat-1].booked == 0) {
                    t[seat-1].booked = 1;
                    printf("Ticket Booked\n");
                } else {
                    printf("Already Booked\n");
                }
                break;

            case 2:
                for(int i=0;i<10;i++) {
                    printf("Seat %d: %s\n", i+1,
                        t[i].booked ? "Booked" : "Available");
                }
                break;
        }
    } while(choice != 3);

    return 0;
}