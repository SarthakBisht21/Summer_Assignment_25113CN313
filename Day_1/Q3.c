// Write a program to Find factorial of a number. 

#include<stdio.h>
int main(){

    int n,fact=1;
    printf("Enter the no.:\n");
    scanf("%d",&n);
    
    if(n>1){
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("The The factorial of given no. is %d.\n",fact);
    }
    
    else if(n==1||n==0){
        printf("The factorial of given no. is 1.\n");
    }
    else{
        printf("Entered no. is invalid.\n");
    }

    return 0;
}
