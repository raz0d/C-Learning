/*
6. Write a recursive function to calculate the sum of first 'n' natural numbers.
*/
#include <stdio.h>

int sum_of_N(int n);
int sum_of_N(int n){

    if (n == 0){
        return 0;
    }
    return sum_of_N(n-1) + n;
}

int main(){
    int n, sum;

    printf("Enter nth number: ");
    scanf("%d", &n);

    if (n<=0)
        printf("Not applicable for negative numbers and zero! ");
    else if (n>0)
        printf("Sum to %d natural numbers: %d", n, sum_of_N(n));

    return 0;
}