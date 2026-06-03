// Write a program to Print Armstrong numbers in a range. 

#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n, temp, r, digits;
    double sum;

    printf("Enter the starting range: ");
    scanf("%d", &n1);

    printf("Enter the ending range: ");
    scanf("%d", &n2);

    printf("Armstrong numbers between %d and %d are:\n", n1, n2);

    for (n = n1; n <= n2; n++) {
        temp = n;
        digits = 0;
        sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        while (temp != 0) {
            r = temp % 10;
            sum += pow(r, digits);
            temp /= 10;
        }

        if ((int)sum == n) {
            printf("%d ", n);
        }
    }

    return 0;
}