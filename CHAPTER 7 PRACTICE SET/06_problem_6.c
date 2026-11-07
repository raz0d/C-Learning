/*
6. Write a program containing functions which counts the number of positive integers in an array.
*/
#include <stdio.h>

int count(int*, int);

int main() {
    
    int array[] = {1, 2, 3, -3, 2, 2, -2};
    int length = sizeof(array) / sizeof(array[0]); 
    
    printf("Total positive numbers: %d", count(&array[0], length));

    return 0;
}

int count(int *ptr, int length) {
    int count = 0;
    for (int i = 0; i < (length); i++) {
        if (*ptr > 0) {
            count += 1;
        }     
        ptr++;
    }
    return count;
}