// Q63 Write a program to Find pair with given sum
#include <stdio.h>

int main() {
    int arr[100], n, sum;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &sum);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
