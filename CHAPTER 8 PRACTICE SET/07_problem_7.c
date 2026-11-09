/*
7. Write a program to decrypt the string encrypted using encrypt function in problem 6.
*/

#include <stdio.h>

void encrypt(char []);
void decrypt(char []);

int main() {
    
    char str[] = "Razod Sio";
    
    printf("Before encrypting: %s\n", str);

    encrypt(str);
    printf("After encryption: %s\n", str);

    decrypt(str);
    printf("After decryption: %s\n", str);

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

void decrypt(char str[]) {
    int i = 0;
    int ascii;
    while (str[i] != '\0') {
        ascii = str[i];
        str[i] = (char)(ascii - 1);
        i++;
    }
}