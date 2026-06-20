#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;

    for (int k = 0; k < i; k++) {
        rev[k] = str[j];
        j--;
    }

    rev[i] = '\0';

    printf("Reversed string = %s\n", rev);

    return 0;
}