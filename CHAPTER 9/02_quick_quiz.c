/*
Write a program to store the details of 3 employees from user defined data. Use the structure declared above.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[50];
};

int main() {
    
    int code;
    float salary;
    char name[50];

    struct employee e1, e2, e3;

    printf("Enter code of the employee: ");
    scanf("%d", &e1.code);

    printf("Enter the salary: ");
    scanf("%f", &e1.salary);

    printf("Enter name of the employee: ");
    scanf("%49s", e1.name);
    
    printf("Name: %s\nCode: %d\nSalary: %.2f\n", e1.name, e1.code, e1.salary);

    printf("Enter code of the employee: ");
    scanf("%d", &e2.code);

    printf("Enter the salary: ");
    scanf("%f", &e2.salary);

    printf("Enter name of the employee: ");
    scanf("%49s", e2.name);
    
    printf("Name: %s\nCode: %d\nSalary: %.2f\n", e2.name, e2.code, e2.salary);
    
    printf("Enter code of the employee: ");
    scanf("%d", &e3.code);

    printf("Enter the salary: ");
    scanf("%f", &e3.salary);

    printf("Enter name of the employee: ");
    scanf("%49s", e3.name);
    
    printf("Name: %s\nCode: %d\nSalary: %.2f\n", e3.name, e3.code, e3.salary);

    return 0;
}