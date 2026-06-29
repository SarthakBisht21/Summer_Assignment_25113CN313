#include <stdio.h>

struct item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct item items[100];
    int n = 0, choice, i, id, found;

    while(1) {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Enter ID, Name, Quantity, Price:\n");
                scanf("%d %s %d %f", &items[n].id, items[n].name,
                      &items[n].quantity, &items[n].price);
                n++;
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\n",
                        items[i].id,
                        items[i].name,
                        items[i].quantity,
                        items[i].price);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                found = 0;

                for(i = 0; i < n; i++) {
                    if(items[i].id == id) {
                        printf("Found: %s, Qty=%d, Price=%.2f\n",
                               items[i].name,
                               items[i].quantity,
                               items[i].price);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Item not found!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}