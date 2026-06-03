// Write a program to Find nth Fibonacci term. 

#include <stdio.h>
int fibonacci(int n){
    if( n ==0 ){
        return 0;
    }
    else if( n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int terms,a ;
    printf("Enter the Number:\n");
    scanf("%d",&terms);

    for (int i =0 ; i<terms ;i++){
        a=fibonacci(i);
    }

    printf("The desired term is:%d\n",a);


    return 0;
}
