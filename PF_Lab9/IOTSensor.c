#include <stdio.h>

int main() {
    void *ptr;
    int v = 847;
    float t = 73.6;
    char s = 'W';

    ptr = &v;
    printf("Vibration: %d Address: %p\n", *(int *)ptr, (void *)ptr);

    ptr = &t;
    printf("Temp: %.2f Address: %p\n", *(float *)ptr, (void *)ptr);

    ptr = &s;
    printf("Status: %c Address: %p\n", *(char *)ptr, (void *)ptr);

    if (*(char *)ptr == 'N') {
        printf("Normal\n");
    } else if (*(char *)ptr == 'W') {
        printf("Warning\n");
    } else if (*(char *)ptr == 'C') {
        printf("Critical\n");
    }

    return 0;
}