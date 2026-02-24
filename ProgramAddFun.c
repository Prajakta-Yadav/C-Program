#include <stdio.h> 
 
int add(int a, int b) { 
    return a + b;     //formal parameters
} 
 
int main() { 
    int x, y, sum; 
 
    printf("Enter two numbers: "); 
    scanf("%d %d", &x, &y);  //actual parameters
 
    sum = add(x, y); 
 
    printf("Sum = %d", sum); 
    return 0; 
} 