#include <stdio.h>

int change(int a);
int change(int a) {
    a = 77; // Misnomer
    printf("value of a: %d\n", a);
    return 0;
}


int main(){
    
    int b = 22;

    change(b); // The value of b remains 22, its a copy that has been passed on to change()
    printf("b is %d\n", b);

    return 0;
}