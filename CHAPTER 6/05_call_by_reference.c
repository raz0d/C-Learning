#include <stdio.h>

int sum(int*, int*);

// this fn should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return *a + *b;
}

int main(){
    
    int x = 1, y = 6;
    printf("sum of 1 and 6: %d\n", sum(&x, &y));
    printf("The value of x: %d\n", x);

    return 0;
}