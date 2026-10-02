#include <stdio.h>

int main(){

    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; //10
    printf("The value of i is %d\n", i);

    // i++; //11
    // ++i; //12
    printf("The value of i is %d\n", i++);

    // i++; prints i first and then increment i later => POST INCREMENT OPERATOR
    // ++i; increments i first and then print i later => PRE INCREMETN OPERATOR

    return 0;
}