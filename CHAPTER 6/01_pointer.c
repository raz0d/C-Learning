#include <stdio.h>

int main(){
    // POINTER IS A VARIABLE 

    int i = 72;

    // variable i is stored in ram at its unique address
    // to get the address of i, we can create j which stores the address of i, THIS j IS KNOWN AS "POINTER"

    // Address in hexadecimal
    printf("The address of i is: %p\n", &i); // %p = pointer

    // To see address in int
    printf("The address of i in integer: %u\n", &i); // %u = unsigned integer 

    int* j = &i; //j is a variabe pointer pointing to i
    // j is an integer pointer
    printf("value of j: %p\n", j);

    int k = 43;
    printf("The address of k is: %p\n", &k);

    printf("The value at address j is %d\n", *j);

    return 0;
}