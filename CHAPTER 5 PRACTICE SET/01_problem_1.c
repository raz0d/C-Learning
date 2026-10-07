/*
1. Write a program using function to find average of three numbers
*/
#include <stdio.h>

float average(float a, float b, float c);
float average(float a, float b, float c){
    float avg = (a+b+c)/3;
    return avg;
}

int main(){
    float a, b, c;
    for (int i=1; i < 4; i++){
        printf("Enter number %d: ", i); 
        if (i==1)   
            scanf("%f", &a);
        else if (i==2)
            scanf("%f", &b);
        else
            scanf("%f", &c);
    }
    printf("Average of %.2f %.2f & %.2f is: %.2f", a, b, c, average(a, b, c));
    return 0;
}