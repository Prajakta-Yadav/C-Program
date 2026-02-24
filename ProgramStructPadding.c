#include <stdio.h> 
 
struct Test { 
    char a; 
    int b; 
}; 
 
int main() { 
    printf("Size of structure = %lu", sizeof(struct Test)); 
    return 0; 
} 