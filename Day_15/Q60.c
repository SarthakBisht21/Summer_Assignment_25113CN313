// Write a program to Move zeroes to end
#include <stdio.h>

int main() {
    int arr[100], n, temp[100], j = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    while(j < n) {
        temp[j++] = 0;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}