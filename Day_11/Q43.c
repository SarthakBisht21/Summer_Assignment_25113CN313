// Write a program to Write function to check prime. 

#include<stdio.h>

int is_prime(int a){
    int prime=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    
    int n;
    printf("Enter the first no.:\n");
    scanf("%d",&n);

    int a = is_prime(n);

    if(a){
        printf("The no. is prime.\n");
    }
    else{
        printf("The no. is not prime.\n");
    }

    return 0;
}