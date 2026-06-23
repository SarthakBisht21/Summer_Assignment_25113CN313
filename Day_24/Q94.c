#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int count;
    for(int i = 0; str[i]; i++) {
        count = 1;
        while(str[i] == str[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }

    return 0;
}