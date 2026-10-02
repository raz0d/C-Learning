/*
5. Write a program to determine whether a character entered by the user is lowercase or not.
*/

#include <stdio.h>

int main(){
    // char ch = 'a';
    // printf("The character is %c\n", ch);
    // printf("The character is %d\n", ch);

    // 97-122 is lower case
    
    char character;
    printf("Enter your char: ");
    scanf("%c", &character);
    
    if(character>=97 && character<=122){
        printf("The character is lower case\n");
    }
    else{
        printf("The character is not lower case\n");
    }
}