/*
10. Write a program to check whether a given number is prime or not using
    a) while loop
    b) do while loop
*/

#include <stdio.h>

int main(){
    
    int num, i = 2, prime = 1;

    printf("Enter num: ");
    scanf("%d", &num);

    if ( num <= 1){

        printf("Not a prime number");

    }else{

        do {
        if ( num % i == 0 && num != i){
            prime = 0;
        }
        i++;
        } while (i < num);

        if (prime) {
            printf("Prime number");
        } else {
            printf("Not a prime number");
        }

    }
    
    return 0;
}