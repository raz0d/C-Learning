/*
2. Write a program to print multiplication table of 10 in reversed order.
*/

#include <stdio.h>

int main(){
    
    int n = 10;

    for (int i=10; i>=1; i--){
        printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}