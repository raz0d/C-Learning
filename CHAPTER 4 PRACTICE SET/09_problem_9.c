/*
9. Repeat 8 using while loop.
*/

#include <stdio.h>

int main(){

    int i = 1, factorial = 1, num;

    printf("Enter num: ");
    scanf("%d", &num);
    
    while (i<=num){
        factorial *= i;
        i++;
    }

    printf("Factorial: %d", factorial);
    
    return 0;
}