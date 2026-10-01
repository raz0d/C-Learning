#include <stdio.h>

int main(){
    int age = 5;

    if (age>10){
        printf("Age is greater than 10\n");
    }
    else{
        printf("Age is less than 10\n");
    }

    if (age%5 == 0){
        printf("Age is divisible by 5\n");
    }
    
    return 0;
}