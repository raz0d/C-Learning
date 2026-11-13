/*
6. Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
*/

#include <stdio.h>

struct complex_number{
    int a;
    int b;
};
typedef struct complex_number Z;

void show(Z);

int main() {
    
    // int number_of_structures;
    // printf("Amount of complex number you wanna store: ");
    // scanf("%d", &number_of_structures);

    Z z[5];

    for (int i = 0; i < 5; i++) {
        printf("Value of a of Z%d: ", i+1);
        scanf("%d", &z[i].a);
        printf("Value of b of Z%d: ", i+1);
        scanf("%d", &z[i].b);
    }

    printf("Displaying all complex number\n");
    for (int i = 0; i < 5; i++) {
        show(z[i]);
    }
    
    return 0;
}

void show(Z z) {
    if (z.b > 0) {
        printf("%d + %di\n", z.a, z.b);
    } else {
        printf("%d - %di\n", z.a, -z.b);
    }
}