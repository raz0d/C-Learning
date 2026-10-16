#include <stdio.h>

int main(){
    
    int marks[5];
    // printf("Enter marks of 5 students:\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for(int i = 0; i < 5; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i<5; i++){
        printf("Marks of Student %d: %d\n", i+1, marks[i]);
    }

    return 0;
}