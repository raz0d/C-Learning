/*
8. Write a program to count the occurrence of a given character in a string.
*/

#include <stdio.h>

int count(char, char []);

int main() {

    char str[] = "Razod Sio";

    char find;
    printf("Enter the character to find: ");
    scanf("%c", &find);

    printf("Occurance of %c in %s is: %d", find, str, count(find, str));
     
    return 0;
}

int count(char find, char str[]) {
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] == find) {
            count++;
        }
        i++;
    }
    return count;
}