// Q61 Write a program to Find missing number in array
#include <stdio.h>

int main() {
    int arr[100], n, sum = 0, total = 0;

    scanf("%d", &n);

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
