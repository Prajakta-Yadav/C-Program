#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
}; 
 
int main() { 
    struct Student s[3]; 
    int i; 
 
    for (i = 0; i < 3; i++) { 
        printf("Enter roll and name for student %d: ", i + 1); 
        scanf("%d %s", &s[i].roll, s[i].name); 
    } 
 
    printf("\nStudent Details:\n"); 
    for (i = 0; i < 3; i++) { 
        printf("Roll: %d Name: %s\n", s[i].roll, s[i].name); 
    } 
 
    return 0; 
} 