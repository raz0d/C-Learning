/*
7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.
*/

#include <stdio.h>

int main() {
    
    int array[3][10];

    for (int i = 0; i < 3; i++) {
        if (i == 0){
            for (int j = 0; j < 10; j++) {
                array[i][j] = 2 * (j+1);
            }
        }
        else if (i == 1){
            for (int j = 0; j < 10; j++) {
                array[i][j] = 7 * (j+1);
            }
        }
        else{
            for (int j = 0; j < 10; j++) {
                array[i][j] = 9 * (j+1);
            }
        }
    }
    
    //DISPLAYING THE ARRAY;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", array[i][j]); 
        }
        printf("\n");
    }

    return 0;
}