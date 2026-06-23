#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    for(int i = 0; str[i]; i++) {
        if(freq[str[i]] == 0) {
            printf("%c", str[i]);
            freq[str[i]] = 1;
        }
    }

    return 0;
}