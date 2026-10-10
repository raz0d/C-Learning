#include <stdio.h>

int main(){

    char i = 'A';
    char* j = &i;
    // j is pointer to i (j is character pointer)
    printf("The address of i is: %p\n", j);
    
    float k = 5.34;
    float* l = &k;
    // k is pointer to l (k is float pointer)
    printf("The address of k is: %p\n", l);

    return 0;
}