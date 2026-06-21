#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0}, i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] != 0 && i != '\n')
            printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}
