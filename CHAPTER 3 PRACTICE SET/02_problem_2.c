/*
2. Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main(){
    
    float m1; float m2; float m3;

    printf("Marks of SUB1: ");
    scanf("%f", &m1);
    if (m1>100 || m1<0){
        printf("Enter a valid mark\n");
        return 0;
    }

    printf("Marks of SUB2: ");
    scanf("%f", &m2);
    if (m2>100 || m2<0){
        printf("Enter a valid mark\n");
        return 0;
    }

    printf("Marks of SUB3: ");
    scanf("%f", &m3);
    if (m3>100 || m3<0){
        printf("Enter a valid mark\n");
        return 0;
    }

    float percentage; 
    percentage = (m1 + m2 + m3) / 3;
    // printf("%f\n", percentage);

    if(percentage>=40){
        if (m1<33 || m2<33 || m3 <33)
            printf("You've failed due to less marks in individual subject(s)");
        else
            printf("You have passed the examination");      
    }
    else{
        printf("You've failed because your total percentage doesn't meet minimum requirements");
    }

    return 0;
}