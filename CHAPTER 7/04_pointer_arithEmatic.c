#include <stdio.h>

int main(){

    // POINTER ARITHEMATIC USING INTEGER POINTER
    int a = 35;

    int *ptr = &a;
    printf("The address of ptr is %u\n", ptr);

    ptr++;

    printf("The adress of ptr now is: %u\n", ptr);

    //POINTER ARITHEMATIC USING CHAR
    char b = 'A';
    char *ptr1 = &b;
    printf("Address of B: %d\n", ptr1);
    
    ptr1++;
    
    printf("Address of B: %d", ptr1);
    
    return 0;
}