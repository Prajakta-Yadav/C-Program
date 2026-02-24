#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *p = NULL; 
 
    printf("Null pointer = %p\n", p); 
 
    p = (int *)malloc(sizeof(int)); 
    free(p); 
 
    // p is now dangling pointer 
    p = NULL; // fix 

 
 
    return 0; 
} 
 
 