#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[100];
};

int main() {
    
    struct employee e1;
    e1.code = 37;
    e1.salary = 25500;

    struct employee *ptr; // Pointer to structure employee
    ptr = &e1;

    printf("%d\n", (*ptr).code);
    printf("%.2f\n", (*ptr).salary);
    
    //ARROW OPERATOR; same as above
    printf("%d\n", ptr->code);
    printf("%.2f\n", ptr->salary);
    

    return 0;
}