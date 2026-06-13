// Write a program to Second largest element.

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    if(second == -1)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}