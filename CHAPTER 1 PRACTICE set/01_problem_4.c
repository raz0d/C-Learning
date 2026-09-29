/*
4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.
*/

#include <stdio.h>

int main(){
    float p_amount, rate, time;

    printf("Enter the Principal Amount: ");
    scanf("%f", &p_amount);
    printf("Enter the PRate of Interest: ");
    scanf("%f", &rate);
    printf("Enter the no. of years: ");
    scanf("%f", &time);

    printf("Your S.I. is %f", (p_amount*rate*time)/100);

    return 0;
}