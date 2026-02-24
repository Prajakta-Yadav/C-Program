#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *p = (int *)calloc(3, sizeof(int)); 
 
    p = (int *)realloc(p, 5 * sizeof(int)); 
 
    printf("Hello");
    free(p); 
    return 0; 
} 