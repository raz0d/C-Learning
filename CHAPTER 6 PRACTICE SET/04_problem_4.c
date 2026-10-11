/*
Write a function and pass the value by reference.
*/
#include <stdio.h>

void value_by_reference(int*);

int main(){
 
    int i;
    printf("Value of i: ");
    scanf("%d", &i);

    value_by_reference(&i);

    return 0;
}

void value_by_reference(int* i){
    printf("Value at %p is %d", (void *)i, *i);
}