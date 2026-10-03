/*
10. Write a program to check whether a given number is prime or not using
    a) while loop
    b) do while loop
*/

#include <stdio.h>

int main(){
    
    int num, i = 2;

    printf("Enter num: ");
    scanf("%d", &num);

    do {
        if ( num % i == 0 && num != i){
            printf("It's not a prime number");
            return 0;
        }
        i++;
    } while (i < num);

    printf("It's a prime number");

    return 0;
}