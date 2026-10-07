/*
3. Write a function to calculate force of attraction on a body of mass 'm' exerted by earth. Consider g = 9.8m/s² .
*/

#include <stdio.h>

float force(float mass);
float force(float mass){
    float force = mass * 9.8;
    return force;
}

int main(){
    float mass;
    printf("Mass of the body: ");
    scanf("%f", &mass);
    printf("Force of attraction on this body by earth: %.2f", force(mass));
    return 0;
}