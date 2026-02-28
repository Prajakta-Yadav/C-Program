#include<stdio.h>

int main(){

    int n, i, j;

    printf("Enter number: ");
    scanf("%d", &n);

    //outer loop
    for(i=1; i<=n;i++){

        //inner loop n-1 spaces
        for(j=1; j<=n-i; j++){
            printf(" ");
        }

        for(int k=1; k<=i; k++){
            printf("*");
        }

        printf("\n");
    }


}