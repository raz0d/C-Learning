/*
8. Write a program to calculate the factorial of a given number using a for loop.
*/

#include <stdio.h>

int main(){

    int num;
    int factorial = 1;
    
    printf("Enter num: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        factorial *= i;
    } 

    printf("Factorial: %d", factorial);

    return 0;
}