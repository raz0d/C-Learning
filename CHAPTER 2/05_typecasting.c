#include <stdio.h>

int main(){
    int n = 45;
    float m = 23.32;

    // This satatement converts float(m) to int(m)
    n = (int) m; // Typecasting Statement

    printf("%d", n);
    return 0;
}