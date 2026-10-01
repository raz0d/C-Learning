#include <stdio.h>

int main(){
    
    if(1){
        printf("This if 1 is executed\n");
    }

    if (23131)
    {
        printf("This if is also executed\n");
    }

    if (213.45)
    {
        printf("This if is also executed\n");
    }
    
    if ('c') //This is also non-zero
    {
        printf("This if is also executed\n");
    }

    if (0) //Zero is considered as false as we all know
    {
        printf("LINE DOESN'T EXECUTE\n");
    }
    

    return 0;
}