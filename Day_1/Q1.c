// Write a program to Calculate sum of first N natural numbers. 

#include<stdio.h>
int main(){

    int n,sum=0;
    printf("Enter the Natural No. n :\n");
    scanf("%d",&n);

    for(int i=1; i<=n ; i++){
         sum +=i ;
    }

    printf("The sum of first %d natural no. is: %d",n,sum);

    return 0 ;
}
