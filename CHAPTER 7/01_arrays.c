#include <stdio.h>

int main(){

    int marks[90]; // Reserve space to store 90 integers

    marks[0] = 45;
    marks[1] = 90;
    // We can go all the way till marks[89] = 100; // This is the last index of the array

    printf("Marks 0 is: %d\nMarks 1 is: %d\n", marks[0], marks[1]);

    
    return 0;
}