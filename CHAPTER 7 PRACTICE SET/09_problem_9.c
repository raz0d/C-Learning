/*
9. Create a three-dimensional array and print the addresses of its elements in increasing order.
*/

#include <stdio.h>

int main() {
    
    int array[2][4][3] = {
        {
            {22, 45, 23}, {21, 43, 93}, {43, 54, 14}, {54, 32, 45}
        },
        {
            {45, 83, 245}, {92, 63, 34}, {42, 02, 289}, {53, 73, 238}
        }
    };

    // Printing the array:

    int *ptr = &array[0][0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Value at address %d is %d\n", ptr, *ptr);
                ptr++;
            }
        }
    }
    return 0;
}
