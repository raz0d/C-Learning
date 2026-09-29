/*
1. Write a C program to calculate the area of the rectangle:
    a) Using hard coded inputs
    b) Using inputs given by the user
*/

#include <stdio.h>

int main(){
    float l, b, area;
    l = 4;
    b = 3;
    area = l * b; 

    printf("Area of the Rectangle: %f", area);

    return 0;
}