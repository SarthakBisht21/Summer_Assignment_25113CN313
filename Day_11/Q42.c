// Write a program to Write function to find maximum.

#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    
    int n1,n2;
    printf("Enter the first no.:\n");
    scanf("%d",&n1);
    printf("Enter the second no.:\n");
    scanf("%d",&n2);

    printf("Max=%d",max(n1,n2));

    return  0;
}