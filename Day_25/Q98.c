#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(int i=0; str1[i]; i++)
        freq[str1[i]] = 1;

    printf("Common characters: ");
    for(int i=0; str2[i]; i++) {
        if(freq[str2[i]] == 1) {
            printf("%c ", str2[i]);
            freq[str2[i]] = 0; // avoid duplicates
        }
    }

    return 0;
}
