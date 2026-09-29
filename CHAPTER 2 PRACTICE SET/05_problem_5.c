/*
5. 3.0+1 will be:
    a. Integer.
    b. Floating point number.
    c. Character.

ANS: Floating point number (NO BRAINER)
*/

#include <stdio.h>

int main(){

    /*
        _Generic(expression,
            type1: result1,
            type2: result2,
            type3: result3
        )
    */

    char *datatype = _Generic(3.0 + 1,
        int: "Integer",
        float: "Float",
        char: "Char",
        double: "Double"
    );

    printf("%s", datatype);
    return 0;
}