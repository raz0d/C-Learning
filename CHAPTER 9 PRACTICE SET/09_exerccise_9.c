// /*
// 9. Write a structure capable of storing date. Write a function to compare those dates.
// */

// #include <stdio.h>

// struct dates_DB {
//     int day;
//     int month;
//     int year;
// };

// struct structured_date {
//     int structured_day;
//     int structured_month;
//     int structured_year;
// };

// void show(struct dates_DB date);

// void compare(struct dates_DB, struct structured_date, int);

// int main() {
    
//     int no_of_dates;
//     printf("No. of dates you want to store: ");
//     scanf("%d", &no_of_dates);

//     struct dates_DB date[no_of_dates];
//     struct structured_date date2[no_of_dates];

//     for (int i = 0; i < no_of_dates; i++) {

//         printf("Day %d: ", i+1);
//         scanf("%d", &date[i].day);

//         if ( date[i].day <= 30 && date[i].day > 0 ) {
//             ;
//         } else {
//             return 0;
//         }
        
//         printf("Month %d: ", i+1);
//         scanf("%d", &date[i].month);
//         if ( date[i].month <= 12 && date[i].month > 0 ) {
//             ;
//         } else {
//             return 0;
//         }
         
//         printf("Year %d: ", i+1);
//         scanf("%d", &date[i].year);
//         if ( date[i].year > 0 ) {
//             ;
//         } else {
//             return 0;
//         }
//     }

//     for (int i = 0; i < no_of_dates; i++) {
//         show(date[i]);
//     }



//     return 0;
// }

// void show(struct dates_DB date) {
//     printf("%d / %d / %d\n", date.day, date.month, date.year);
// }

// void compare(struct dates_DB date, 
//                 struct structured_date date2, 
//                 int no_of_dates)
//     {
//     int day_array[no_of_dates];
//     int month_array[no_of_dates];
//     int year_array[no_of_dates];

//     int date_value;

//     for (int i = 0; i < no_of_dates; i++) {
//         day_array[i] = date.day;
//         month_array[i] = date.month;
//         year_array[i] = date.year;
//     }

//     for (int i = 0; i < no_of_dates; i++) {

//     }

// }

// GAVE UP AFTER THIS - NOW WATCHING VIDEO SOLUTION OF CWH

#include <stdio.h>

struct date {
    int dd;
    int mm;
    int yyyy;
};

int compare(struct date, struct date);

int main() {

    struct date d1 = {16, 5, 2019};
    struct date d2 = {13, 5, 2019};

    printf("%d", compare(d1, d2));
    
    return 0;
}

int compare(struct date d1, struct date d2) {
    if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yyyy == d2.yyyy)) {
        return 0;
    }

    if (d1.yyyy > d2.yyyy) {
        return 1;
    }
    else if(d1.yyyy == d2.yyyy) {
        if (d1.mm == d2.mm) {
            if (d1.dd > d2.dd) {
                return 1;
            }else {
                return -1;
            }
        }
        if (d1.mm > d2.mm) {
            return 1;
        }else {
            return -1;
        }
    }else {
        return -1;
    }

}