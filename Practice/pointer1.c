#include <stdio.h> 
 
int add(int a, int b) { 
    return a + b; 
} 
 
int main() { 
    int (*fp)(int, int); 
    fp = add; 
 
    printf("Sum = %d", fp(10, 20)); 
    return 0; 
} 