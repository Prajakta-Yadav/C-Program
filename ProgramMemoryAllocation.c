#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *p; 
    p = (int *)malloc(5 * sizeof(int)); 
 
    if (p == NULL) { 
        printf("Memory not allocated"); 
        return 0; 
    } 
 
    p[0] = 10; 
    printf("Value = %d", p[0]); 
 
    free(p); 
    return 0; 
} 