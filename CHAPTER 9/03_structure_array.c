#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main() {
    
    struct employee facebook[100];
    
    facebook[0].code = 100;
    facebook[1].code = 101;

    // INITIALIZING A STRUCTURE

    struct employee Razod = {256, 25000, "Razod"};
    printf("%d %.2f %s\n", Razod.code, Razod.salary, Razod.name);
    
    return 0;
}