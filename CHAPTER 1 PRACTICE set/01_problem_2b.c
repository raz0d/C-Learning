/*
2. Calculate the area of a circle and 
    b) modify the same program to calculate the volume of a cylinder given its radius and height
*/

#include <stdio.h>

int main(){
    float r, h, area;

    printf("Radius of the cylinder: ");
    scanf("%f", &r);
    printf("Heihgt of the cylinder: ");
    scanf("%f", &h);

    printf("Volume of the cylinder with radius %f and height %f is: %f", r, h, 3.14*r*r*h);

    return 0;
}