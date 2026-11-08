/*
2. Write a program to take string as an input from the user using %c and %s and confirm that the strings are equal.
*/
#include <stdio.h>
#include <string.h>

int main() {

    char str1[6];
    for (int i = 0; i < 5; i++) {
        printf("Element %d of the str1: ", i+1);
        scanf("%c", &str1[i]);
        fflush(stdin);
    }
    str1[5] = '\0';

    char str2[6];
    printf("Write complete str2: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal");
    }
    
    
    return 0;
}