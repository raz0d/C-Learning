/*
5. Write a program containing a function which reverses the array passed to it.
*/

// #include <stdio.h> 

// void reverse_array(int []);
// void display(int []);

// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     reverse_array(array);
//     display(array);
//     // printf("%d", sizeof(array)/sizeof(array[0]));
//     return 0;
// }

// void reverse_array(int array[]) {
//     int temp_array[(sizeof(array)/sizeof(array[0])) + 1];
//     for (int i = 0; i < ((sizeof(array)/sizeof(array[0])) + 1); i++) {
//         temp_array[i] = array[(sizeof(array)/sizeof(array[0])) - i];
//     }
//     for (int i = 0; i < ((sizeof(array)/sizeof(array[0])) + 1); i++) {
//         array[i] = temp_array[i];
//     }
// }

// void display(int array[]) {
//     for (int i = 0; i < ((sizeof(array)/sizeof(array[0])) + 1); i++) {
//         printf("Value at index %d: %d\n", i, array[i]);
//     }
// }

#include <stdio.h>

void reverse_array(int*, int);

int main() {
    int length, array[7] = {1, 2, 3, 4, 5, 6, 7};
    length = sizeof(array) / sizeof(array[0]);

    reverse_array(&array[0], length);

    //DISPLAYING THE ARRAY
    for (int i = 0; i < length; i++) {
        printf("Value at index %d: %d\n", i, array[i]);
    }

    return 0;
}

void reverse_array(int *ptr, int length) {

    int temp_array[length];

    for (int i = 1; i < (length + 1); i++) {
        temp_array[i-1] = ptr[length - i]; 
    }

    for (int i = 0; i < length; i++) {
        ptr[i] = temp_array[i];
    }

}