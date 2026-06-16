// Q66 Write a program to Union of arrays
#include <stdio.h>

int main() {
    int a[100], b[100], c[200], n1, n2, k = 0, found;

    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);

    for(int i = 0; i < n1; i++) {
        found = 0;
        for(int j = 0; j < k; j++) if(c[j] == a[i]) found = 1;
        if(!found) c[k++] = a[i];
    }

    for(int i = 0; i < n2; i++) {
        found = 0;
        for(int j = 0; j < k; j++) if(c[j] == b[i]) found = 1;
        if(!found) c[k++] = b[i];
    }

    for(int i = 0; i < k; i++) printf("%d ", c[i]);

    return 0;
}