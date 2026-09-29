/*
3. Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>

int main(){
    int a; 
    printf("Value: ");
    scanf("%d", &a);

    int x = a%97;

    if (x==0)
    {
        printf("Divisible by 97");
    }
    else 
    {
        printf("Not divisible by 97");
    }

    return 0;
}