#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
}; 
 
int main() { 
    struct Student s[2] = { 
        {1, "Amit"}, 
        {2, "Neha"} 
    }; 
 
    int i; 
    for (i = 0; i < 2; i++) { 
        printf("Roll: %d Name: %s\n", s[i].roll, s[i].name); 
    } 
 
    return 0; 
} 
 
 