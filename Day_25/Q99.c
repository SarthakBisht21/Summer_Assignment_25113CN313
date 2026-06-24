#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50], temp[50];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // clear buffer

    printf("Enter names:\n");
    for(int i=0; i<n; i++)
        fgets(names[i], 50, stdin);

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for(int i=0; i<n; i++)
        printf("%s", names[i]);

    return 0;
}