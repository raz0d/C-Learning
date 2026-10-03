/*
10. Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main(){

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++){
        if ( num%i == 0){
            printf("It's not a prime number");
            return 0;
        }
    }

    printf("It's a prime number");
    
    return 0;
}