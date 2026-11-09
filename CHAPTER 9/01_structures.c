#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[50];
};

int main() {
    
    struct employee e1, e2, e3;
    e1.code = 3282;
    e1.salary = 25000;
    strcpy(e1.name, "Razod");
    
    printf("%d %.2f %s", e1.code, e1.salary, e1.name);

    return 0;
}