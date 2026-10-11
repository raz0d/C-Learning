/*
Write a program to print the address of a variable. Use this address to get the value of
the variable
*/

void address(int* a);
void value(int* a);

#include <stdio.h>

int main(){
    int a;
    printf("Value of integer: ");
    scanf("%d", &a);
    address(&a);
    value(&a);
    return 0;
}

void address(int* a){
    printf("Address of %d is: %p\n", *a, a);
}
void value(int* a){
    printf("Value at %p is %d\n", a, *a);
}