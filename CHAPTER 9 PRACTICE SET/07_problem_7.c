/*
7. Write problem 5's structure using typedef keywords.
*/

/*
Write a program with a structure representing a complex number.
*/

#include <stdio.h>

struct complex_number{
    int a;
    int b;
};
typedef struct complex_number Z;

void show(Z);

int main() {
    
    int number_of_structures;
    printf("Amount of complex number you wanna store: ");
    scanf("%d", &number_of_structures);

    Z z[number_of_structures];

    for (int i = 0; i < number_of_structures; i++) {
        printf("Value of a of Z%d: ", i+1);
        scanf("%d", &z[i].a);
        printf("Value of b of Z%d: ", i+1);
        scanf("%d", &z[i].b);
    }

    printf("Displaying all complex number\n");
    for (int i = 0; i < number_of_structures; i++) {
        show(z[i]);
    }
    
    return 0;
}

void show(Z z) {
    printf("%d + %di\n", z.a, z.b);
}