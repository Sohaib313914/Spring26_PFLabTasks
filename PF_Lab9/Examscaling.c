#include <stdio.h>

int main() {
    int marks[6] = {45, 60, 35, 50, 28, 55};
    int *p = marks;
    int high = *p;
    int i;

    printf("Old marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    for (i = 1; i < 6; i++) {
        if (*(p + i) > high) {
            high = *(p + i);
        }
    }

    for (i = 0; i < 6; i++) {
        float calc = ((float)*(p + i) / high) * 100;
        *(p + i) = (int)calc;
    }

    printf("\nNew marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}