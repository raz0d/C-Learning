/*
Create a structure representing a bank account of a customer. What fields did you use and why?
*/

#include <stdio.h>
#include <string.h>

struct bank_account {
    char name[100];
    int acc_number;
    int ifsc_code;
    int mobile_number;
};

typedef struct bank_account bank;

void show(bank id);

int main() {
    
    int no_of_records;
    printf("How many accounts do you want to store: ");
    scanf("%d", &no_of_records);

    bank id[no_of_records];

    for (int i = 0; i < no_of_records; i++) {

        printf("Enter NAME of Acc%d: ", i+1);
        char temp_name[100];
        scanf("%s", temp_name);
        strcpy(id[i].name, temp_name);

        printf("Enter ACCOUNT NUMBER of Acc%d: ", i+1);
        scanf("%d", &id[i].acc_number);

        printf("Enter IFSC CODE of Acc%d: ", i+1);
        scanf("%d", &id[i].ifsc_code);

        printf("Enter MOBILE NUMBER of Acc%d: ", i+1);
        scanf("%d", &id[i].mobile_number);

        printf(" \n");
    }
    
    for (int i = 0; i < no_of_records; i++) {
        show(id[i]);
    }
    return 0;
}

void show(bank id) {
    printf("\nName: %s\nAccount number: %d\nIFSC Code: %d\nMobile Number: %d\n\n", id.name, id.acc_number, id.ifsc_code, id.mobile_number);
}