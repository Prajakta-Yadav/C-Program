#include <stdio.h> 
 
int main() { 
    FILE *fp = fopen("binary.dat", "wb"); 
    int x = 100; 
 
    fwrite(&x, sizeof(int), 1, fp); 
    fclose(fp); 
 
    return 0; 
} 