#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i]; i++) {
        freq[str[i]]++;
        if(freq[str[i]] == 2) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found");
    return 0;
}