#include <stdio.h>

int main(){

    int a = 9;
    int b = 2;
    float c = a/b;
    printf("Value of a/b is %f\n", c);

    float x = 9;
    int y = 2;
    float z = x/y;
    printf("Value of x/y is %f\n", z);

    /*
    Quick Quiz: 
    int k = 3.0/9 
    value of k? and why?

    Ans: 3.0/9 = 0.333. But since k is an int, it cannot store floats & value 0.33 is demoted to 0.
    */

    int k = 3.0/9;
    printf("Value of \"int k = 3.0/9\" is %d", k);


    return 0;
}