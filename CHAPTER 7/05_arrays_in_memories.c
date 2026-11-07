#include <stdio.h>

int main() {
    
    int marks[5];
    int temp_mark = 0;

    for (int i  = 0; i < 5; i++){
        temp_mark = 0;
        printf("Enter mark %d: ", i+1);
        scanf("%d", &temp_mark);
        marks[i] = temp_mark;
    }

    for (int i = 0; i < 5; i++){
        printf("Address of value %d: %d\1n", i+1, &marks[i]);
    }
    
    return 0;
}