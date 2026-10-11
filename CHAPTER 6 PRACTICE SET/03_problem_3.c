/*
Write a program to change the value of a variable to ten times its current value.
*/

#include <stdio.h>

void change_value(int*);

int main(){
    
    int i;
    printf("Enter the value of a: ");
    scanf("%d", &i);

    change_value(&i);
    printf("Value of i: %d", i);

    return 0;
}

void change_value(int* i){
    *i *= 10; 
}