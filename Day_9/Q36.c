// Write a program to Print hollow square pattern. 
// ***** 
// *   * 
// *   * 
// *   * 
// *****

#include<stdio.h>
int main(){

    for(int i = 0 ; i < 5 ; i++ ){
        if((i==0) || (i==4)){
        for(int j = 1 ; j <=5 ; j++){
            printf("*");
        }
        printf("\n");
    }
    else{
        printf("*   *\n");
    }
}

    return 0;
}