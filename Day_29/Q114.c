#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while(1) {
        printf("\n--- Array Menu ---\n");
        printf("1. Display\n2. Sum\n3. Largest\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 4) break;

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3: {
                int max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max) max = arr[i];
                printf("Largest = %d\n", max);
                break;
            }

            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}