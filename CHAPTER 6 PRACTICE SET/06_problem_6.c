/*
Write a program to print the value of a variable i by using a pointer to pointer type variable.
*/

#include <stdio.h>

int main(){
    
    int i = 67;
    int* j = &i; // Pointer to i
    int** k = &j; // Pointer to pointer to i

    printf("Value of i: %d", **k);
    return 0;
}