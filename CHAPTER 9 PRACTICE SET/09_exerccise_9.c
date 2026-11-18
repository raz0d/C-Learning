/*
9. Write a structure capable of storing date. Write a function to compare those dates.
*/

#include <stdio.h>

struct date_strcuture {
    int day;
    int month;
    int year;
};

int main() {
    
    int no_of_dates;
    printf("No. of dates you want to store: ");
    scanf("%d", &no_of_dates);

    struct date_structure date[no_of_dates];

    for (int i = 0; i < no_of_dates; i++) {

    }
    
    return 0;
}