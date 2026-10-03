/*
6. Write a program to implement program 5 using 
    a)for loop  
    b)do-while loop
*/

#include <stdio.h>

int main(){
    
    int sum = 0;

    for (int i=1; i<=10; i++)
        sum += i;

    printf("Sum: %d", sum);

    return 0;
}