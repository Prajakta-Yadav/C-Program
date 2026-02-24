#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[100]; 
    int i, j; 
    char temp; 
 
    printf("Enter a string: "); 
    fgets(str, 100, stdin); 
 
    j = strlen(str) - 1; 
    if (str[j] == '\n') 
        j--; 
 
    for (i = 0; i < j; i++, j--) { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
    } 
 
    printf("Reversed string: %s", str); 
    return 0; 
} 
 
 