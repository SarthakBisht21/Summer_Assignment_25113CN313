// Write a program to Check whether a number is prime.

#include<stdio.h>
int main(){

    int n,prime=1;

    printf("Enter a no.:\n");
    scanf("%d",&n);

    for(int i = 2 ; i<n ; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }

    if(n==1){
        printf("The entered no. %d is not a prime.\n",n);
    }

    else if(n<=0){
        printf("The entered no. %d is not a prime.\n",n);
    }

    else if(prime==0){
        printf("The entered no. %d is not a prime.\n",n);
    }
    else{
    printf("The entered no. %d is a prime.\n",n);
    }

    return 0;
}
