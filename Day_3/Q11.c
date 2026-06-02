// Write a program to Find GCD of two numbers.

#include<stdio.h>
int main(){

    int a,b,temp=1;

    printf("Enter the first no.:\n");
    scanf("%d",&a);
    
    printf("Enter the second no.:\n");
    scanf("%d",&b);

    if(a<0){
        a = -a;
    }
    
    if(b<0){
        b = -b;
    }

    if(a==0 && b==0){
    printf("GCD = 0\n");
    printf("LCM = 0\n");
    }

    else if(a==0){
        printf("GCD = %d\n", b);
        printf("LCM = 0\n");
    }

    else if(b==0){
        printf("GCD = %d\n", a);
        printf("LCM = 0\n");
    }

    else{
        for(int i = 1 ; i<=(a<b?a:b) ; i++){
            if((a%i==0)&&(b%i==0)){
                temp=i;
            }
        }
        printf("The GCD of both the entered no. is: %d\n",temp);
}

    return 0;
}
