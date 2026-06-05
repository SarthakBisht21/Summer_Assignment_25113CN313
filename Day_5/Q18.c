// Write a program to Check strong number.

#include <stdio.h>

int main() {
    int num, original, rem, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        rem = num % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
