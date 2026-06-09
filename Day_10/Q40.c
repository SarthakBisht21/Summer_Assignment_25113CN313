//Write a program to Print character pyramid. 
//    A 
//   ABA 
//  ABCBA 
// ABCDCBA 
//ABCDEDCBA 

#include<stdio.h>
int main(){

    for(int i=0;i<5;i++){
        int k=1;
        for(int j=(4-i);j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;j++){
            if(j<=i){
                printf("%c",'A'+j);
            }
            else{
                printf("%c",'A'+i-k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}