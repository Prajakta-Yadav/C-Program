#include <stdio.h> 
 
union Data { 
    int i; 
    float f; 
}; 
 
int main() { 
    union Data d; 
    d.i = 10; 
    //d.f = 25.56;
    printf("Integer: %d", d.i);
    // printf("Integer: %f", d.f); 
    return 0; 
} 
 
 