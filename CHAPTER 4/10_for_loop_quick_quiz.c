/*
Print first n natural numbers using for loop
*/

#include <stdio.h>

int main(){
    
    int n;
    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}