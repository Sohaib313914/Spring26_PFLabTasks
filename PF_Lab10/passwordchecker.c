#include <stdio.h>
#include <string.h>

int main() {
    char key[] = "123helpme";
    char entry[50];
    int count = 0;

    while (count < 3) {
        printf("\nPassword: ");
        scanf("%s", entry);

        if (strlen(entry) == 0) {
            continue;
        }

        if (strcmp(entry, key) == 0) {
            printf("Access Granted!\n");
            return 0;
        } else {
            if (strcmp(entry, key) < 0) {
                printf("Hint:Stored password is further in alphabet");
            } else {
                printf("Hint. Stored password is earlier in alphabet");
            }
            count++;
        }

        if (count == 2) {
            if (strncmp(entry, key, 3) == 0) {
                printf("\nNote First 3 match!\n");
            }
        }
    }

    printf("\nBlocked.\n");
    return 0;
}