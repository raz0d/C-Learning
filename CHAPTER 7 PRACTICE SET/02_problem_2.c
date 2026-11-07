/*
2. If S[3] is a 1-D array of integers then * (S + 3) refers to the third element:
    i.    True.
    ii.   False.
    iii.  Depends.
*/

// ANSWER: FALSE, it will give the fourth elemet of the list not third which is non existent

// ROUGH WORK
#include <stdio.h>

int main() {
    
    int S[3] = {1, 2, 3};
    printf("%d\n", *(S+2));
    printf("%d\n", (S+2));
    
    return 0;
}