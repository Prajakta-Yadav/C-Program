#include <stdio.h> 
 
struct Date { 
    int day, month, year; 
}; 
 
struct Student { 
    int roll; 
    struct Date dob; 
}; 
 
int main() { 
    struct Student s = {1, {10, 5, 2002}}; 
 
    printf("Roll: %d\n", s.roll); 
    printf("DOB: %d-%d-%d", s.dob.day, s.dob.month, s.dob.year); 
 
    return 0; 
} 
 