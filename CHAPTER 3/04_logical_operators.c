#include <stdio.h>

int main(){

    int a = 1; 
    int b = 1;

    printf("The value of 'a AND b' is %d\n", a&&b);
    printf("The value of 'a OR b' is %d\n", a||b);

    int x = 1; 
    int y = 0;

    printf("The value of 'x AND y' is %d\n", x&&y);
    printf("The value of 'x OR y' is %d\n", x||y);

    printf("The value of not(a) is %d\n", !a);

    if (a && b){
        printf("Both conditions are true\n");
    }
    
    // WITHOUT AND OPERATOR (nested if)
    if (a){
        if(b){
            printf("Still meets both conditions without AND operator with simplifications\n");
        }
    }
    
    return 0;
}