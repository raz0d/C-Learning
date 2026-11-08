/*
4. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice.
*/

#include <stdio.h>
#include <string.h>

void slice(char [], int, int);
int main() {
    
    char str[] = "Razod Sio";

    slice(str, 4, 7);
    printf("%s", str);
    
    return 0;
}

void slice(char str[], int m, int n) {

    int length = strlen(str);
    char temp_str[length + 1];

    int i = 0, j = 0;

    // while (str[i] != '\0') {
    //     if (str[i] == str[m]) {
    //         while ((str[i] != str[n]) && (j < n)) {
    //             temp_str[j] = str[i];
    //             j++;
    //             i++;
    //         }
    //         break;
    //     }
    //     i++;
    // }

    while (str[i] != '\0') {
        if ((i >= m) && (i <= n)) {
            temp_str[j] = str[i];
            j++;
        }
        i++;
    }

    temp_str[j] = '\0'; //TERMINATING THE STRING

    strcpy(str, temp_str);
}