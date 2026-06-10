// Write a program to Write function to find factorial. 

#include<stdio.h>
int fact(int a){
    if(a==0){
        return 1;
    }
    else if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int n;
    printf("Enter the no.:\n");
    scanf("%d",&n);

    printf("The factorial of the entered no.is:%d\n",fact(n));
    return 0;
}