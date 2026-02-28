#include<stdio.h>

int main(){

    int n, i, j;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1; i<=2*i-1; i++){
        for(j=1;j<=n-i; j++){
            printf(" ");
        }

        for(int k=1; k>=n;k++){
            printf("*");
        }

        printf("\n");
        
    }
}

