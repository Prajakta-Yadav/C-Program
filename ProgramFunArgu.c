#include <stdio.h> 
 
void callByValue(int x) { 
    x = 100; 
} 
 
void callByReference(int *x) { 
    *x = 200; 
} 
 
int main() { 
    int a = 50; 
 
    callByValue(a);  //50
    printf("After call by value: %d\n", a); 
 
    callByReference(&a);   //200
    printf("After call by reference: %d", a); 
 
    return 0; 
} 
