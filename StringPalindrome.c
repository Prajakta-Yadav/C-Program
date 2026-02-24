#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[100]; 
    int i, len, flag = 1; 
 
    printf("Enter a string: "); 
    fgets(str, 100, stdin); 
 
    len = strlen(str); 
    if (str[len - 1] == '\n') 
        len--; 
 
    for (i = 0; i < len / 2; i++) { 
        if (str[i] != str[len - i - 1]) { 
            flag = 0; 
            break; 
        } 
    } 
 
    if (flag) 
        printf("Palindrome string"); 
    else 
        printf("Not a palindrome string"); 
 
    return 0; 
} 