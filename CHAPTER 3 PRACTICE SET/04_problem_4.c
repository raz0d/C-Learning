/*
4. Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
*/

#include <stdio.h>

int main(){
    
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year%4==0){
        if(year%400==0){
            printf("Its a leap year\n");
        }
        else if(year%100==0){
            printf("It's not a leap year\n");
        }
        else{
            printf("It's a leap year");
        }
    }
    else{
        printf("It's not a lea year");
    }

    return 0;
}