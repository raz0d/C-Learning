/*
1. Write a C program to calculate the area of the rectangle:
    a) Using hard coded inputs
    b) Using inputs given by the user
*/

#include <stdio.h>

int main(){
    float l, b, area;

    printf("Value of length: ");
    scanf("%f", &l);

    printf("Value of breadth: ");
    scanf("%f", &b);

    area = l * b;
    printf("Area of the rectangle %f", area);

    return 0;
}