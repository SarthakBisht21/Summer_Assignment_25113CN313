// Write a program to Reverse a number. 

#include<stdio.h>
int main(){

    long long int n,rev=0,a;

    printf("Enter a no.:\n");
    scanf("%lld",&n);

    a=n;

    if(n==0){
        printf("The reverse of the number is 0.\n");
    }
    else{
        if(a<0){
            a=a*(-1);
        }
        while(a>0){
            rev = (rev*10)+(a%10);
            a=a/10;
        }

        if(n>0){
            printf("The reverse of the number is %lld.\n",rev);
        }
        else{
            printf("The reverse of the number is -%lld.\n",rev);
        }
    }

    return 0;
}
