// Q64 Write a program to Remove duplicates from array
#include <stdio.h>

int main() {
    int arr[100], n, temp[100], j = 0, found;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        found = 0;
        for(int k = 0; k < j; k++) {
            if(arr[i] == temp[k]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            temp[j++] = arr[i];
        }
    }

    for(int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
