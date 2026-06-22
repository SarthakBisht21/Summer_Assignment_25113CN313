#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i]; i++)
        freq[str[i]]++;

    for(int i = 0; str[i]; i++) {
        if(freq[str[i]] == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");
    return 0;
}