#include <stdio.h>

int *fun(void){
    int b= 700;
    return &b;
}

int main(){
    int a =600;
    int *ptr;
    printf("%p\n", &a);

    ptr = fun();
    printf("%d\n", *ptr);

    return 0; 
}