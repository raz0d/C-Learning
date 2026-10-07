/*
2. Write a function to convert Celsius temperature into Fahrenheit.
*/

#include <stdio.h>

float temp_conversion(float degree_celcius);
float temp_conversion(float degree_celcius){
    float degree_fahrenheit;
    degree_fahrenheit = (degree_celcius * 1.8) + 32;
    return degree_fahrenheit;
}

int main(){
    float degree_celcius;
    printf("Enter degree celcius: ");
    scanf("%f", &degree_celcius);
    printf("Into fahrenheit: %.2f degree", temp_conversion(degree_celcius));    
    return 0;
}