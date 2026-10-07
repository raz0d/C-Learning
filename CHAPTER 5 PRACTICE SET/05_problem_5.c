/*
5. What will the following line produce in a C program?
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
*/
#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}