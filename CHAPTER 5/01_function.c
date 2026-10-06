#include <stdio.h>

// Function prototype
int sum(int, int);


// Function definition
int sum(int x, int y){ // x & y are parameters
    // printf("The sum is: %d\n", x + y);
    return x + y;
}

int main(){

    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    
    int a1 = 3;
    int b1 = 4;
    
    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    
    int a2 = 5;
    int b2 = 6;
    
    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    
    // Readibility of the code is less
    // We can't do this manually 50 times, without messing with our heads
    
    // In that case, we create a function of this logic: i.e, a+b and call them like =>
    
    // Function call statement
    sum(a, b);
    sum(a1, b1);
    sum(a2, b2);

    printf("The sum is %d\n", sum(a, b)); // a & b are arguments
    printf("The sum is %d\n", sum(a1, b1));
    printf("The sum is %d\n", sum(a2, b2));

    return 0;
}