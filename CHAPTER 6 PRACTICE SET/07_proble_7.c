/*
Try problem 3 using call by value and verify that it does not change the value of the variable.
*/

#include <stdio.h>

int multiplier(int);

int main(){
    
    int i;
    printf("Value of i: ");
    scanf("%d", &i);
    
    printf("Ten times value of i: %d", multiplier(i));
    
    return 0;
}

int multiplier(int i){
    return 10*i;
}