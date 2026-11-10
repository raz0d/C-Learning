/*
PASSING STRUCTURE TO A FUNCTION
A structure can be passed to a function just like any other data type.
void show(struct employee e); // function prototype
Quick Quiz: Complete this show function to display the content of employee.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int code;
    float salary;
};

void show(struct employee e);

int main() {    

    // int no_of_employees;
    // printf("No. of Employees: ");
    // scanf("%d", &no_of_employees);

    // struct employee e[no_of_employees];
    
    // for (int i = 0; i < no_of_employees; i++) {
        //     printf("Enter the name of Employee %d: ", i);
        //     scanf("%s", &e[i].name);
        //     printf("Enter the code of Employee %d: ", i);
        //     scanf("%d", &e[i].code);
        //     printf("Enter the salary of Employee &d: ", i);
        //     scanf("%f", &e[i].salary);
        // }
        

    struct employee e1, e2, e3;
    strcpy(e1.name, "Alsamad");
    e1.code = 101;
    e1.salary = 25000;
    strcpy(e2.name, "Razod");
    e2.code = 102;
    e2.salary = 45000;
    strcpy(e3.name, "Sio");
    e3.code = 103;
    e3.salary = 80000;

    show(e1);
    show(e2);
    show(e3);

    return 0;
}

void show(struct employee e) {
    printf("Name: %s\n", e.name);
    printf("Code: %d\n", e.code);
    printf("Salary: %.2f\n", e.salary);
}