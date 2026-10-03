/*
1. Write a program to print multiplication table of a given number n .
*/

#include <stdio.h>

int main(){
    
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}