#include <stdio.h>

int main(){
    
    int i, j;

   // printf("Enter a number");
    //scanf("%d", &n);
    /*
    for(i=1; i<=4;i++){
        for(j=1;j<4;j++){
            printf("*");
        }
         printf("*\n");
    }   */

    for (i=1; i<=4; i++){
        for(j=1; j<4; j++){
            if(i==1 ||  j==1 || i==4 || j==4){
                printf("");
            }
        }
         printf("*");

    }
    
}