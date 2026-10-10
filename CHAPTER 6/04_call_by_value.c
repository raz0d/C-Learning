#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int main(){
    int x = 1, y = 6;
    printf("sum of 1 and 6: %d\n", sum(x, y));
    // the copy of x & y will be passed    
    // no changes will be made to a & b
    return 0;
}