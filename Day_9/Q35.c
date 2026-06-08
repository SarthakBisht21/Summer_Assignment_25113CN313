// Write a program to Print repeated character pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 

#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 5; i++) { 
        for(j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }

    return 0;
}