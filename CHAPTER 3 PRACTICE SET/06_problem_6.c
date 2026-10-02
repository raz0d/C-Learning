/*
6. Write a program to find greatest of four numbers entered by the user.
*/


#include <stdio.h>

int main(){
    int num1, num2, num3, num4, greatest_number;
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Enter number 4: ");
    scanf("%d", &num4);

    if ((num1>num2 && num1>num3) && num1>num4)
        greatest_number = num1;
    else if ((num2>num1 && num2>num3) &&num2>num4)
        greatest_number = num2;
    else if ((num3>num1 && num3>num2) && num3>num4)
        greatest_number = num3;
    else
        greatest_number = num4;
    
    printf("Greatest number is %d", greatest_number);

    return 0;
}

/*
// HARRY'S CODE:

#include <stdio.h>

int main(){
    int a=4, b=2, c=6, d=32;
    if(a>b && a>c && a>d){
        printf("Greatest number is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("Greatest number is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("Greatest number is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("Greatest number is %d", d);
    }

    return 0;
}
*/