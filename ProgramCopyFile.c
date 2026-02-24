#include <stdio.h> 
 
int main() { 
    FILE *source, *target; 
    char ch; 
 
    source = fopen("data.txt", "r"); 
    target = fopen("copy.txt", "w"); 
 
    if (source == NULL || target == NULL) { 
        printf("File error"); 
        return 0; 
    } 
 
    while ((ch = fgetc(source)) != EOF) { 
        fputc(ch, target); 
    } 
 
    fclose(source); 
    fclose(target); 
 
    printf("File copied successfully"); 
    return 0;                     
} 
 