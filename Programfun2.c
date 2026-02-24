#include <stdio.h> 
 
int add(int, int);   // declaration 
 
int main() {     
    int sum = add(10, 20);     
    printf("Sum = %d", sum);     
    return 0; 
} 
 
int add(int a, int b) {   // definition     
    return a + b; 
} 
 
 