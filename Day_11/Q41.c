// Write a program to Write function to find sum of two numbers.

#include<stdio.h>

int sum(int a , int b){
    int c;
    c = a + b;
    return c;        
    }

int main(){

    int n1,n2;
    printf("Enter the first no.:\n");
    scanf("%d",&n1);
    printf("Enter the second no.:\n");
    scanf("%d",&n2);

    printf("The sum of the two no. is:%d",sum(n1,n2));

    return 0;
}