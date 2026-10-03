/*
Write a program to print first 'n' natural number using do-while loop
*/

#include <stdio.h>

int main(){
    int i = 0;
    int n;

    printf("Value of n: ");
    scanf("%d", &n);

    do{
        i++;
        printf("%d\n", i);
    } while(i<n);

    return 0;
}