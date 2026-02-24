#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
}; 
 
int main() { 
    struct Student s = {1, "Ravi"}; 
    struct Student *p = &s; 
 
    printf("Roll: %d\n", p->roll); 
    printf("Name: %s", p->name); 
 
    return 0; 
} 