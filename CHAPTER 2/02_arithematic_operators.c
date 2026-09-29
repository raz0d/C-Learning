#include <stdio.h>

int main(){

    int a; 
    printf("Value of A: "); 
    scanf("%d", &a);
    int b; 
    printf("Value of B: "); 
    scanf("%d", &b);

    printf("The value of a is %d, value of b is %d and sum is %d\n", a, b, a+b);

    // Modulus operaot is used to get the remainder
    printf("The remainder when %d is divided by %d is %d\n", a, b, a%b);

    return 0;

}