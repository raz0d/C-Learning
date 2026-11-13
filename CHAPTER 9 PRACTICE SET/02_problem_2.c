/*
2. Write a function sumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
*/

#include <stdio.h>

typedef struct vector_2d {
    int i;
    int j;
}vector;

vector sumVector (vector, vector);
void show(vector);

int main() {
    
    // CREATING STRUCTURE BASED ON USER INPUT
    int no_of_data;
    printf("How many data you want to store: ");
    scanf("%d", &no_of_data);

    vector v[no_of_data];
    
    for (int k = 0; k < no_of_data; k++) {
        printf("Value of i of vector %d: ", k+1);
        scanf("%d", &v[k].i);
        printf("Value of j of vector %d: ", k+1);
        scanf("%d", &v[k].j);
    } 

    // DISPLAYING COMPLETE STRUCTURE
    for (int i = 0; i < no_of_data; i++) {
        printf("Vector no. %d: ", i+1);
        show(v[i]);
    }

    // ADDING TWO VECTORS
    char response;
    printf("You want to add two vectors? (y/n): ");
    scanf(" %c", &response);
    if (response == 'y') {
        int v1, v2;
        vector calculated_sum;

        printf("Which two vectors?\n");

        printf("First vector: ");
        scanf("%d", &v1);

        printf("Second Vector: ");
        scanf("%d", &v2);

        calculated_sum = sumVector(v[v1 - 1], v[v2 - 1]);

        // DISPLAYING THE ADDED STRUCTURE
        printf("Sum of the two vectors: ");
        show(calculated_sum);
    }

    return 0;
}

void show(vector v) {
    printf("%di + %dj\n", v.i, v.j);
}

vector sumVector (vector v1, vector v2) {

    vector sum;
    sum.i = v1.i + v2.i;
    sum.j = v1.j + v2.j;

    return sum;
}