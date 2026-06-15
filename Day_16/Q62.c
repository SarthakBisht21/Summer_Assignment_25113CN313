// Q62 Write a program to Find maximum frequency element
#include <stdio.h>

int main() {
    int arr[100], n, maxCount = 0, element;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("%d", element);

    return 0;
}
