// Write a program to Find sum of digits of a number. 

#include<stdio.h>
int main(){

    int n,sum=0;

    printf("Enter a no.:\n");
    scanf("%d",&n);

    if(n==0){
        printf("The sum of the digits is 0.\n");
    }
    else{
        if(n<0){
            n=n*(-1);
        }
        while(n>0){
            sum = sum +(n%10);
            n=n/10;
        }
        printf("The sum of the digits is %d.\n",sum);
    }

    return 0;
}
