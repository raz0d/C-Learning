/*
3. Write your own version of strlen function from <string.h>.
*/

#include <stdio.h>

int strlen(char []);

int main() {

    char str[] = "Razod";
    printf("Length: %d", strlen(str));

    return 0;
}

int strlen(char str[]) {
    int i = 0, length = 0;
    
    while (str[i] != '\0') {
        i++;
        length++;
    }

    return length;
}