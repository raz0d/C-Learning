#include <stdio.h>

int main(){
    
    int arr[3] = {1, 2, 3}; // 1 integer = 4 bytes (varies)
   
    // This will reserve 4x3 = 12 bytes in memory (4 bytes for each integer).

    /*
    [1][2][3]
    Adress of 1: 62302
    Adress of 2: 62306
    Adress of 3: 62310
    4 bytes to each integer
    */
    return 0;
}