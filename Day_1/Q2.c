// Write a program to Print multiplication table of a given number.

#include<stdio.h>
int main(){

    int n;
    printf("Enter the no.:\n");
    scanf("%d",&n);

    printf("The Table of %d is:\n",n);

    for(int i=1 ; i<=10 ; i++ ){
        printf("%d x %d = %d \n",n,i,n*i);
    }
    
    return 0;
}
