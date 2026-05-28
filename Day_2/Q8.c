// Write a program to Check whether a number is palindrome.

#include<stdio.h>
int main(){

    long long int n,rev=0,a;

    printf("Enter a no.:\n");
    scanf("%lld",&n);
    a=n;

    if(n < 0){
        printf("Negative numbers are not palindrome numbers.\n");
    }

    else{
        while(n > 0){
            rev = (rev*10)+(n%10);
            n=n/10;
        }
        if(a==rev){
            printf("The no. you entered is a palindrome no.\n");
        }
        else{
            printf("The no. you entered is not a palindrome no.\n");
        }
    }

    return 0;
}
