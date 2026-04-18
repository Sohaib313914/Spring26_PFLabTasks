#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char namebox[50];
    int size;
    int check = 0;

    printf("Input name: ");
    scanf("%[^\n]s", namebox);

    size = strlen(namebox);

    if (size < 3 || size > 20) {
        printf("Invalid Name: %d", size);
        return 0;
    }

    if (namebox[0] == ' ' || namebox[size - 1] == ' ') {
        printf("Invalid Name: %d", size);
        return 0;
    }

    for (int k = 0; k < size; k++) {
        if (isdigit(namebox[k])) {
            check = 1;
        }
    }

    if (check == 1) {
        printf("Invalid Name: %d", size);
    } else {
        printf("Valid Name: %d", size);
    }

    return 0;
}