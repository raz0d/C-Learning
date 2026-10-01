/*
Quick Quiz: Write a program to find grade of a given student based on his marks given below:
    90-100  =>   A
    80-90   =>   B
    70-80   =>   C
    60-70   =>   D
    50-60   =>   E
    <50     =>   F
*/

#include <stdio.h>

int main(){
    
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if(marks>=90 && marks<=100){
        printf("A grade");
    }
    else if(marks>=80 && marks<=89){
        printf("B grade");
    }
    else if(marks>=70 && marks<=79){
        printf("C grade");
    }
    else if(marks>=60 && marks<=69){
        printf("D grade");
    }
    else if(marks>=50 && marks<=59){
        printf("E grade");
    }
    else if(marks<=49 && marks>=0){
        printf("F grade");
    }
    else{
        printf("Enter a valid marks between 1 to 100");
    }

    return 0;

}