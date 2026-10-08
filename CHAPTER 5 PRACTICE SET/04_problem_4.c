/*
4. Write a program using recursion to calculate nth element of Fibonacci series
*/

#include <stdio.h>

int fibonacci_series(int);
int fibonacci_series(int n){
    int nth_term = 0;
    if (n <= 0){
        printf("Not applicable for negative numbers and zero! ");
        return -1;
    }
    else if (n == 1){
        return 0;
    }
    else if(n == 2 || n == 3){
        return 1;
    }
    else{
        nth_term = fibonacci_series(n - 1) + fibonacci_series(n-2);
        return nth_term;
    }
}

int main(){

    int n, nth_term;
    printf("Enter nth number: ");
    scanf("%d", &n);

    nth_term = fibonacci_series(n);

    if (nth_term>=0)
        printf("No. %d term is: %d", n, nth_term);

    return 0;
}

// #include <stdio.h>

// // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// // fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

// int fibonacci(int);

// int fibonacci(int n){
//     if(n == 1 || n==2){
//         return n-1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
 
// int main(){
//     int n = 1;
//     printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
//     return 0;
// }