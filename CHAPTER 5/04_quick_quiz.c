/*
Quick Quiz: Use the library function to calculate the area of a square with side a.
Hint:
    Use pow(a, 2) from <math.h> to calculate a².
Formula
    Area of square = side × side = a²
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    int a, area;
    printf("Side of the square: ");
    scanf("%d", &a);

    printf("Area is: %.0f", pow(a, 2)); //pow returns a double value

    return 0;
}