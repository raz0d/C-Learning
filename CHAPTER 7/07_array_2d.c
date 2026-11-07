/*
Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.
*/

#include <stdio.h>

void display(int row, int column, int array[row][column]); 

void display_in_format(int row, int column, int array[row][column]);

int main() {

    int row, column, temp_value;
    printf("Number of rows in array: ");
    scanf("%d", &row);
    printf("Number of column in array: ");
    scanf("%d", &column);

    int array[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            temp_value = 0;
            printf("Value at co-ords (%d,%d): ", i, j);
            scanf("%d", &temp_value);
            array[i][j] = temp_value;
        }
    } 

    display(row, column, array);
    display_in_format(row, column, array);

    return 0;
}

void display(int row, int column, int array[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Value at (%d, %d): %d\n", i, j, array[i][j]);
        }
    }
}

void display_in_format(int row, int column, int array[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}