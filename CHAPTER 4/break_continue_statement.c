#include <stdio.h>

int main(){
    
    for (int i = 0; i <= 5; i++){

        if (i == 2){
            break; // EXIT THE LOOP 
        }

        printf("i is %d\n", i);
    }

    printf("First for loop is done\n");
    printf("\n");
    
    for (int i = 0; i <= 5; i++){
        
        if (i == 2){
            continue; // EXIT THIS ITERATION NOW
        }
        
        printf("i is %d\n", i);
    }
    
    printf("Second for loop is done\n");
    printf("\n");

    return 0;
}