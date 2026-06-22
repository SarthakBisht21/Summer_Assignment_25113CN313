#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i]; i++)
        freq[str[i]]++;

    int max = 0;
    char ch;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c", ch);
    return 0;
}