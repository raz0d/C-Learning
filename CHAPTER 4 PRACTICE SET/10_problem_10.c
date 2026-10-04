/*
10. Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main(){

    int num, prime = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1){

        printf("Not a prime number\n");
        
    }else{

        for (int i = 2; i < num; i++){
            if ( num%i == 0){
                prime = 0;
                break;
            }
        }

        if (prime) {
        printf("Prime numer");
        } else {
        printf("Not a prime number");
        }
    }

    return 0;
}