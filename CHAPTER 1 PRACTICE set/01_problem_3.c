/*
3. Witte a program to convert Celsius (Centigrade degrees temperature) to Fahrenheit
*/

#include <stdio.h>

int main(){
    float celcius, fahrenheit;
    printf("Enter degree celcius: ");
    scanf("%f", &celcius);
    
    fahrenheit =  (celcius*1.8) + 32; 
    printf("That would be %f degree Fahrenheit", fahrenheit);
    
    return 0;
}