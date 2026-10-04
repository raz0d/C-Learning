/*
10. Write a program to check whether a given number is prime or not using
    a) while loop
    b) do while loop
*/

#include <stdio.h>

int main(){
    
    int num;
    int i = 2, prime = 1;

    printf("Enter num: ");
    scanf("%d", &num);

    if ( num <= 1){

        printf("Not a prime number");

    }else{

        while (i < num) {
            if (num % i == 0){
                prime = 0;
            }
            i++;
        }

        if (prime){
        printf("Prime number");
        } else {
        printf("Not a prime number");
        }
    }

    return 0;
}