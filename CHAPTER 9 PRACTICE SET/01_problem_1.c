#include <stdio.h>

struct vector_2d {
    int i;
    int j;
};
typedef struct vector_2d vector;

void show(struct vector_2d v);

int main() {
    
    int data_no;
    printf("No. of data you want to store: ");
    scanf("%d", &data_no);

    vector v[data_no];
    
    for (int a = 0; a < data_no; a++) {
        printf("Value of i of Vector %d: ", a+1);
        scanf("%d", &v[a].i);
        printf("Value of j of Vector %d: ", a+1);
        scanf("%d", &v[a].j);
    }

    for (int i = 0; i < data_no; i++) {
        show(v[i]);
    }

    return 0;
}

void show(struct vector_2d v) {
    printf("%di + %dj\n", v.i, v.j);
}