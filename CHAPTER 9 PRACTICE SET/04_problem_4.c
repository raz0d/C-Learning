/*
4. Write a program to illustrate the use of arrow operator -> in C.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    char name[100];
    float salary;
};

int main() {
    
    int nnumber_;
    printf("Total number of values: ");
    scanf("%d", &nnumber_);
    struct employee e[nnumber_];
    for (int i = 0; i < nnumber_; i++) {
        printf("Employee Code: ");
        scanf("%d", &e[i].code);
        printf("Name: ");
        char name[100];
        scanf("%s", &name);
        strcpy(e[i].name, name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    
    // Displaying all values with using "->"
    int structure_number;
    printf("Which structure: ");
    scanf("%d", &structure_number);

    struct employee *ptr; // IMPORTANT LINE
    ptr = &e[structure_number - 1];
    printf("%d %s %.2f", ptr->code, ptr->name, ptr->salary);

    return 0;
}