#include <stdio.h>

int main() {
    
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // Same as above

    for (int i = 0; i < 3; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    //OR
    
    printf("%s", str); // DEMN
    return 0;
}