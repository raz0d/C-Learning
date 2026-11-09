/*
9. Write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>

int found(char, char []);

int main() {
    char str[] = "Razod Sio";
    char char_to_find;

    printf("Enter char to find: ");
    scanf("%c", &char_to_find);
    
    if (found(char_to_find, str))
        printf("Found it...!");
    else
        printf("Not found!!");

    return 0;
}

int found(char char_to_find, char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == char_to_find) {
            return 1;
        }
        i++;
    }
    return 0;
}