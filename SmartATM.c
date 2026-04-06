#include <stdio.h>

int checkPIN(int a, int b) {
    if (a == b) return 1;
    return 0;
}

int main() {
    int pin = 4729;
    int input;
    int count = 3;

    while (count > 0) {
        printf("Enter PIN: ");
        scanf("%d", &input);

        if (checkPIN(pin, input)) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            count--;
            if (count == 0) {
                printf("Card blocked. Contact your bank.\n");
            } else {
                printf("Wrong PIN. %d tries left.\n", count);
            }
        }
    }
    return 0;
}