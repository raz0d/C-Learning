#include <stdio.h>

int main() {
    
    int array[5];
    int temp_value;

    for (int i = 0; i < 5; i++){
        temp_value = 0;
        printf("Enter value %d of Array: ", i+1);
        scanf("%d", &temp_value);
        array[i] = temp_value;
    }

    // int *pointer_at_first_element = &array[0];
    int *pointer_at_first_element = array; // Same as above line

    printf("\n\n");

    for (int i = 0; i < 5; i++){
        printf("Current location of pointer: %u\n", pointer_at_first_element);
        printf("Value at this location: %d\n\n", *pointer_at_first_element);
        pointer_at_first_element++;
    }
    
    return 0;
}