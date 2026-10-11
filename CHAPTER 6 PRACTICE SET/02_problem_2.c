/*
Write a program having a variable i . Print the address of i . Pass this variable to a function and print its address. Are these addresses the same? Why?
*/

#include <stdio.h>

void address(int);
void same_address(int*);

int main(){

    int i;

    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("Value of i: %d\nAddress of i: %p\n\n", i, &i);
    
    address(i);
    same_address(&i);
    
    return 0;
}

void address(int a){
    printf("Value of a: %d\nAddress of a: %p\n\n", a, &a);
}
// The address of a and i are not same.
// In function, copy of i is being passed to "a". Hence, DIFFERENT ADDRESS

void same_address(int* b){
    printf("Value of b: %d\nAddress of b: %p\n\n", *b, b);
}
// The address of b and i are same.
// The exact "i" is getting transferred. Hence, SAME ADDRESS

