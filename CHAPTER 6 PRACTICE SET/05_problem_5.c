/*
Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main() .
*/

#include <stdio.h>

void sum_and_average(float*, float*, float*, float*);


int main(){

    float a, b, sum = 0, avg = 0;

    printf("The value of a: ");
    scanf("%f", &a);    
    printf("The value of b: ");
    scanf("%f", &b);

    sum_and_average(&a, &b, &sum, &avg);
    
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f", avg);

    return 0;
}

void sum_and_average(float *a, float *b, float *sum, float *avg){
    *sum = *a + *b;
    *avg = *sum / 2; 
}