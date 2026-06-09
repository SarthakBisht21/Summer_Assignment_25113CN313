// Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// *********

#include<stdio.h>
int main(){

    for(int i=0;i<5;i++){
        for(int j=(4-i);j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}