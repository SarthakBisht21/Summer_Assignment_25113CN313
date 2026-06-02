// Write a program to Print prime numbers in a range.

#include<stdio.h>
int main(){

    int n1,n2,prime;

    printf("Enter the first no.:\n");
    scanf("%d",&n1);
    printf("Enter the second no.:\n");
    scanf("%d",&n2);

    if(n1<2){
        n1=2;
    }

    printf("The prime no.'s are:\n");

    for(int i = n1 ; i < n2 ; i++){
        prime=1;
        for(int j = 2 ; j < i ; j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime==1){ 
            printf("%d\n",i);
        }
    }

    return 0;
}
