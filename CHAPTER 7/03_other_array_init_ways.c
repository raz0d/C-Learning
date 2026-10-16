#include <stdio.h>

int main(){
    
    int marks[3] = {53, 87, 94};
    for (int i = 0; i<3; i++){
        printf("Value at index %d is: %d\n", i, marks
        [i]);
    }

    float cgpa[] = {7.87, 8.48, 8.94};
    for (int i = 0; i<3; i++){
        printf("Value at index %d is: %.2f\n", i, cgpa
        [i]);
    }

    return 0;
}