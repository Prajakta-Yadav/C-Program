#include <stdio.h> 
 
int main() { 
    FILE *fp = fopen("data.txt", "a"); 
    fprintf(fp, "\nNew Line Added"); 
    fclose(fp); 
    return 0; 
} 