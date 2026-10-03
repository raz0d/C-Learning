//do-while executes minimum of 1 time 

#include <stdio.h>

int main(){
    int i = 0;

    do{
        printf("The value of i %d\n", i);
        i++;
    } while (i<4);
    
    return 0;
}