/*
7. Write a program using function to print the following pattern (first n lines):
    *
    ***
    *****
    *******
    *********
*/

#include <stdio.h>

int pattern(int n);
int pattern(int n){
    for (int i = 0; i < n; i++){
        int j = 0;
        while (j < (2*i + 1)){
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Enter number greater than 0\n");
    }else{
        pattern(n);
    }
    return 0;
}