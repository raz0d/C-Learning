/*
6. Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
*/

#include <stdio.h>

void encrypt(char []);

int main() {
    
    char str[100] = "Razod Sio";
    char temp_str[100];
    int i = 0;
    int ascii;

    printf("String: %s\n\n", str);

    printf("All the ASCII VALUES: \n");
    while (str[i] != '\0') {
        ascii = str[i];
        printf("%d ", ascii);
        i++;
    }
    
    printf("\n\n");
    printf("All teh characters by ASCII values: \n");
    i = 0;
    while (str[i] != '\0') {
        ascii = str[i];
        printf("%c ", (char)(ascii));
        i++;
    }
    printf("\n\n");

    encrypt(str);

    printf("Modified string: %s", str);
    
    return 0;
}

void encrypt(char str[]) {
    int i = 0;
    int ascii;
    while (str[i] != '\0') {
        ascii = str[i];
        str[i] = (char)(ascii + 1);
        i++;
    }
}