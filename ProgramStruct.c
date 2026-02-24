#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
}; 
 
int main() { 
    struct Student s1 = {1, "Rahul"}; 

 
    printf("Roll: %d\n", s1.roll); 
    printf("Name: %s", s1.name); 
 
    return 0; 
} 
 
 