// Write a program to Count digits in a number.

#include<stdio.h>
int main(){

    long long int n,a=0;
    printf("Enter the no.:\n");
    scanf("%lld",&n);

    if(n==0){
        printf("The no. of digit is 1.\n");
    }
    else{
        if(n<0){
        n=n*(-1);
    }
    while(n>0){
        a=a+1;
        n=n/10;
    }
    
    printf("The no. of digits are %lld.\n",a);
}
    return 0;
}
