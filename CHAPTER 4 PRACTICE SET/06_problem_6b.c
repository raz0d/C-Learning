/*
6. Write a program to implement program 5 using 
    a)for loop  
    b)do-while loop
*/

#include <stdio.h>

int main(){
    
    int sum = 0, i = 1;

    do{
        sum += i;
        i++;
    }while(i<=10);

    printf("Sum %d", sum);

    return 0;
}