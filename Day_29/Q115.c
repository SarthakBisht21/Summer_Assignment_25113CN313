#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i;

    printf("Enter a string: ");
    scanf("%s", str);

    while(1) {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char rev[100];
                int len = strlen(str);
                for(i = 0; i < len; i++)
                    rev[i] = str[len - i - 1];
                rev[len] = '\0';
                printf("Reversed = %s\n", rev);
                break;
            }

            case 3:
                for(i = 0; str[i] != '\0'; i++)
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                printf("Uppercase = %s\n", str);
                break;

            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}