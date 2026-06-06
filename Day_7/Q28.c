// Write a program to reverse a number using recursion.

#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (num < 0) {
        temp = -num;
    }

    result = reverseNumber(temp, 0);

    if (num < 0) {
        result = -result;
    }

    printf("Reversed number = %d", result);

    return 0;
}