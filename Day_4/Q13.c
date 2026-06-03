// Write a program to Generate Fibonacci series.

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
    int terms ;
    printf("Enter the Number: ");
    scanf("%d",&terms);


    printf("The Fibonacci series will be: ");
    for (int i =0 ; i<terms ;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
