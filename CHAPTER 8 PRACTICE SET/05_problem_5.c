/*
5. Write your own version of strcpy function from <string.h>.
*/

#include <stdio.h>
#include <string.h>

void my_strcpy(char [], char []);

int main() {    
    char str1[100], str2[100];
    printf("Enter a string (max 99 char): ");
    gets(str2); 

    my_strcpy(str1, str2);

    printf("%s", str1);

    return 0;
}

void my_strcpy(char str1[], char str2[]) { 
    int i = 0;
    
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    
    str1[i] = '\0';
}


// void strcpy(char str1[], char str2[]) {
//     int length_str1 = strlen(str1 + 1), i = 0;
//     char temp[length_str1];
//     while (str1[i] != '\0') {
//         temp[i] = str1[i];
//         i++;
//     }
//     temp[strlen(temp) + 1] = '\0';
//     i = 0;
//     while (str2[i] != '\0') {
//         str1[i] = str2[i];
//         i++;
//     }
//     i = 0;
//     while (temp[i] != '\0') {
//         str2[i] = temp[i];
//         i++;
//     }
// }

// CREAED A STR SWAP FUNCTION INSTEAD OF COPY