// Write a program to Find largest prime factor.

#include <stdio.h>

int main() {
    int num, i, largest = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largest = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor: %d", largest);

    return 0;
}
