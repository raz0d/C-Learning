/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main() {
    
    int array[10] = {43, 22, 54, 453, 25, 86, 47, 18, 49, 65};
    int *ptr_of_first_elemet = array;

    printf("Third element of array (INDEXING METHOD): %d\n", array[2]);

    printf("Pointer value: %u\n", ptr_of_first_elemet);
    
    printf("Element at (value of pointer + 2): %d\n", *ptr_of_first_elemet+2);
    
    return 0;
}