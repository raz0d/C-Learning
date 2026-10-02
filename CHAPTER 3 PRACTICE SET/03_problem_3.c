/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
    Income Slab Tax
    2.5 - 5.0L 5%
    5.0L - 10.0L 20%
    Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main(){
    float salary_of_emplyee;
    float income_tax;
    printf("Enter your salary (in lacs): ");
    scanf("%f", &salary_of_emplyee);

    if(salary_of_emplyee<0){
        printf("Enter a valid salary number");
        return 0;
    }

    if(salary_of_emplyee<2.5){
        printf("You don't need to pay Income Tax\n");
    }
    else if(salary_of_emplyee>=2.5&&salary_of_emplyee<5){
        income_tax = 5 * salary_of_emplyee / 100;
        printf("Your income tax(5): %.2fL\n", income_tax);
    }
    else if(salary_of_emplyee>=5&&salary_of_emplyee<10){
        income_tax = 20 * salary_of_emplyee / 100;
        printf("Your income tax(20): %.2fL\n", income_tax);
    }
    else{
        income_tax = 30 * salary_of_emplyee / 100;
        printf("Your income tax(30): %.2fL\n", income_tax);
    }

    return 0;
}