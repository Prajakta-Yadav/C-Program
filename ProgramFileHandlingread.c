#include <stdio.h> 
 
int main() { 
    FILE *fp; 
    char ch[100]; 
 
    fp = fopen("data.txt", "r"); 
 
    if (fp == NULL) { 
        printf("File not found"); 
        return 0; 
    } 
 
    while (fgets(ch, 100, fp) != NULL) { 
        printf("%s", ch); 
    } 
 
    fclose(fp); 
    return 0; 
} 
 