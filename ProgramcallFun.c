#include <stdio.h> 
 
void callByValue(int x)  //x=20 
{     x = 20; 

} 

 
void callByReference(int *x) //x =30
{     *x = 30; 
} 
 
int main() {     
    int a = 10;     // a =10
 
    callByValue(a);     // when formal a = 10   but actual x =20  
    printf("After call by value: %d\n", a);   //a = 10 its mean call by value does not change original x = 20
 
    callByReference(&a);     //a store address 
    printf("After call by reference: %d", a); // * point the actual value a =30 , its change the actual value of X =30
 
    return 0; 
} 
 
 