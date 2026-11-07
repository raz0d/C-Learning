/*
5. Write a program containing a function which reverses the array passed to it.
*/

#include <stdio.h>

void display(int [], int);
void reverse(int [], int);

int main() {    

    int array[] = {1, 2, 3, 4, 5, 6, 7};

    display(array, 7);
    reverse(array, 7);
    display(array, 7);
    
    return 0;
}

void display(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void reverse(int array[], int length) {
    int temp;
    for (int i = 0; i < length/2; i++) {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}