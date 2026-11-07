#include <stdio.h>
#include <string.h>

int main() {
    
    // //LENGTH OF STRING
    // char str[] = "Razod";
    // printf("%d\n", strlen(str));

    // //COPYING STRING
    // char target[30];
    // strcpy(target, str); // target now contains str
    // printf("%s\n", target);

    // //CONCATINATION OF STRING
    // char a1[56] = "Razod";
    // char a2[56] = " Bhai";
    // strcat(a1, a2);
    // printf("%s\n%s\n", a1, a2);

    // COMPARING STRING

    int a = strcmp("apple", "butter");
    int b = strcmp("apple", "apple");
    int c = strcmp("butter", "apple");
    printf("%d %d %d", a, b, c);

    return 0;
}