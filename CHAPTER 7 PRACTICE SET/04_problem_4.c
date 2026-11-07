/*
4. Repeat problem 3 for a general input provided by the user using scanf.
*/

#include <stdio.h>

int main() {
    
    int num, table[10];
    printf("Multiplication table of: ");
    scanf("%d", &num);
    
    for (int i = 0; i < 10; i++) {
        table[i] = num * (i+1);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i+1, table[i]);
    }
    
    return 0;
}