/*
9. Write a structure capable of storing date. Write a function to compare those dates.
*/

#include <stdio.h>

struct date_structure {
    int day;
    int month;
    int year;
};

void show(struct date_structure date);

int main() {
    
    int no_of_dates;
    printf("No. of dates you want to store: ");
    scanf("%d", &no_of_dates);

    struct date_structure date[no_of_dates];

    for (int i = 0; i < no_of_dates; i++) {

        printf("Day %d: ", i+1);
        scanf("%d", &date[i].day);

        if ( date[i].day <= 30 && date[i].day > 0 ) {
            ;
        } else {
            break;
        }
        
        printf("Month %d: ", i+1);
        scanf("%d", &date[i].month);
        if ( date[i].month <= 12 && date[i].month > 0 ) {
            ;
        } else {
            break;
        }
         
        printf("Year %d: ", i+1);
        scanf("%d", &date[i].year);
        if ( date[i].day > 0 ) {
            ;
        } else {
            break;
        }
    }

    for (int i = 0; i < no_of_dates; i++) {
        show(date[i]);
    }

    return 0;
}

void show(struct date_structure date) {
    printf("%d / %d / %d\n", date.day, date.month, date.year);
}