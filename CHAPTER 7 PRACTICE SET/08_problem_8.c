/*
8. Repeat problem 7 for a custom input given by the user.
*/
#include <stdio.h>

int main() {
    
    int no_of_tables;

    printf("How many tables do you want in the array: ");
    scanf("%d", &no_of_tables);

    int temp_array[no_of_tables];

    for (int i = 0; i < no_of_tables; i++) {
        printf("Enter table no. %d: ", i+1);
        scanf("%d", &temp_array[i]);
    }

    int array[no_of_tables][10];

    for (int i = 0; i < no_of_tables; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = temp_array[i] * (j + 1);
        }
    }

    // DISPLAYING THE ARRAY:
    for (int i = 0; i < no_of_tables; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}