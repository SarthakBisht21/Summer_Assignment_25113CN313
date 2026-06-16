// Q67 Write a program to Intersection of arrays
#include <stdio.h>

int main() {
    int a[100], b[100], n1, n2, found;

    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);

    for(int i = 0; i < n1; i++) {
        found = 0;
        for(int k = 0; k < i; k++) if(a[i] == a[k]) found = 1;
        if(found) continue;

        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}