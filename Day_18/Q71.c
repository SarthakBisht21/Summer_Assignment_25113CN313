// Q71 Write a program to Binary search
#include <stdio.h>

int main() {
    int a[100], n, key, low = 0, high, mid, found = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if(a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    if(!found) printf("Not found");

    return 0;
}