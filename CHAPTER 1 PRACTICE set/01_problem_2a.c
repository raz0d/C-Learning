/*
2. Calculate the area of a circle and 
    b) modify the same program to calculate the volume of a cylinder given its radius and height
*/

#include <stdio.h>

int main(){
    float r, area;

    printf("Radius of the circle: ");
    scanf("%f", &r);

    area = 3.14*r*r;
    printf("Area of the Circle: %f", area);

    return 0;
}