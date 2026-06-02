// Write a program to Find LCM of two numbers.

//my 1st logic:
/*#include<stdio.h>
int main(){

    int a,b,LCM;

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
    
    for(int i = (a<b?b:a) ;; i++){
        if((i%a==0)&&(i%b==0)){
            LCM = i;
            break;
        }
    }

    printf("The LCM of both the entered no. is: %d\n",LCM);

    return 0;
}*/

//second logic:

#include<stdio.h>
int main(){

    int a,b,GCD=1,LCM;

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
                GCD=i;
            }
        }
        printf("The GCD of both the entered no. is: %d\n",GCD);

        LCM = (a*b)/GCD;

        printf("The LCM of both the entered no. is: %d\n",LCM);
    }

    return 0;
}
