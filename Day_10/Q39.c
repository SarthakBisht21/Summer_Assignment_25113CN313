// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321 

#include<stdio.h>
int main(){

    for(int i=0;i<5;i++){
        int k=1;
        for(int j=(4-i);j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;j++){
            if(j<=i){
                printf("%d",j+1);
            }
            else{
                printf("%d",i-k+1);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}