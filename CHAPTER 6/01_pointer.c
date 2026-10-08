#include <stdio.h>

int main(){

    int i = 72;

    // variable i is stored in ram at its unique address
    // to get the address of i, we can create j which stores the address of i, THIS j IS KNOWN AS "POINTER"

    // Address in hexadecimal
    printf("The address of i is: %p\n", &i);

    // To see address in int
    printf("The address of i in integer: %u\n", &i);

    int* j = &i; //j is a pointer pointing to i
    printf("value of j: %p\n", j);

    int k = 43;
    printf("The address of k is: %p\n", &k);

    return 0;
}