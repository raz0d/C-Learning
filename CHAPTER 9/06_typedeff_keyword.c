#include <stdio.h>
#include <string.h>

// typedef struct employee {
//     int code;
//     float salary;
//     char name[100];
// }emp;

struct employee {
    int code;
    float salary;
    char name[100];
};

typedef struct employee emp;

int main() {

    // typedef int razod; // razod is now a datatype which is a integer
    // razod a2 = 88;
    // printf("The value of a is %d\n", a2);
    
    emp e1;
    e1.code = 101;
    e1.salary = 25000;
    strcpy(e1.name, "Razod Sio");

    emp *ptr = &e1;

    printf("%d %.2f %s \n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s \n", ptr->code, ptr->salary, ptr->name);
    
    return 0;
}