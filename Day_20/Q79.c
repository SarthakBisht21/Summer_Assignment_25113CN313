// Q79 Write a program to Find row-wise sum
#include <stdio.h>

int main() {
    int a[10][10], r, c, sum;

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        sum = 0;
        for(int j = 0; j < c; j++)
            sum += a[i][j];
        printf("%d\n", sum);
    }

    return 0;
}