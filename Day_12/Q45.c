// Write a program to check palindrome using function.

#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        return 1; 
    else
        return 0; 
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome number.\n", number);
    else
        printf("%d is NOT a Palindrome number.\n", number);

    return 0;
}