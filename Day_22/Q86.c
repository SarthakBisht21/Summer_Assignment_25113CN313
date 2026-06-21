#include <stdio.h>

int main() {
    char str[200];
    int i = 0, count = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if((str[i] == ' ' || str[i] == '\n') && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
        i++;
    }

    if(i > 1)
        count++;

    printf("Words: %d", count);

    return 0;
}
