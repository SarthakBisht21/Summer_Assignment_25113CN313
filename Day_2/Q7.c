// Write a program to Find product of digits. 

#include<stdio.h>
int main(){

    long long int n,prod=1;

    printf("Enter a no.:\n");
    scanf("%lld",&n);

    if(n==0){
        printf("The product of the digits of the number is 0.\n");
    }
    else{
        if(n<0){
            n=n*(-1);
        }
        while(n>0){
            prod = prod*(n%10);
            n=n/10;
        }
            printf("The product of the digits of the number is %lld.\n",prod);
    }

    return 0;
}
