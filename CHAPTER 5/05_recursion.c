#include <stdio.h>

int factorial(int);

// Factorial(5) = 1 x 2 x 3 x 4 x 5
// Factorial(4) = 1 x 2 x 3 x 4
// Factorial(3) = 1 x 2 x 3
    
// Factorial(n) = 1 x 2 x 3 x .... x n
// Factorial(n-1) = 1 x 2 x 3 x .... x (n-1)

// Factorial (n) = Facotrial(n-1) x n

int factorial(int n){

    // BASE CONDITION
    if (n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

/*
whats happening is: lets say value of a is 4
now,

and factorial() is returning => 4 x factorial(4-1)

we're goin in that fn again, so, 
it returns => 12 x factorial(3-1)
or, it gives => 4 x 3 x factorial(3-1)

we're goin in that fn again, it's kind of a loop 
it will keep running until we apply a condition

so, next it gives=> 24 x factorial(2-1)
or, it gives=> 4 x 3 x 2 x factorial(2-1)

it will into factorial() again and will met the "BASE CONDITION" of 
    if (n==1 || n==0){
        return 1;
    }

now the fn will return 1, so
n = 24 x 1
or, n = 4 x 3 x 2 x 1

IMP: since, the function returns 1 without calling itself, the RECURSION ENDS

it will exit the function 
making the value of "n" i.e, 4 => 4 x 3 x 2 x 1 
or, n = 24 
*/

// FLOW CHART
/*
factorial(4)
    ↓
4 × factorial(3)
    ↓
4 × 3 × factorial(2)
    ↓
4 × 3 × 2 × factorial(1)
                    ↓
                  return 1
                    ↓
            4 × 3 × 2 × 1
                    ↓
                   24
*/

int main(){

    int a = 5;

    printf("The factorial of %d is %d", a, factorial(a)); 

    return 0;
}