#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';

    printf("Result: %s", str);

    return 0;
}
