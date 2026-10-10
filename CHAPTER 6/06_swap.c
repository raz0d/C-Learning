#include <stdio.h>

void swap(int*, int*);

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
    
    int a = 5, b = 9;
    swap(&a, &b);

    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);

    return 0;
}