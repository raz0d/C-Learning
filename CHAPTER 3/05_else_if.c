#include <stdio.h>

int main(){
    int age = 65;

    // IF ELIF IF ELSE LADDER

    if (age>60){
        printf("You can drive and you're a senior citizen\n");
    }
    // IF "if" is true "else if" didn't get checked
    else if(age>18){ 
        printf("You can drive\n");
    }
    else if(age>40){
        printf("You can drive and you are elder\n");
    }
    // Last "else" is executed only if all the conditions fails
    else{
        printf("You cant drive\n");
    }

    return 0;
    
}