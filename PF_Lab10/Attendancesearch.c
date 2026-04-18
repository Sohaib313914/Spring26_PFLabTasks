#include <stdio.h>
#include <string.h>

int main() {
    char kids[5][30];
    char search[30];
    int status = 0;

    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(kids[i], 30, stdin);
        kids[i][strcspn(kids[i], "\n")] = '\0';
    }

    printf("\nList:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", kids[i]);
    }

    printf("\n Find name. ");
    scanf("%s", search);

    for (int i = 0; i < 5; i++) {
        if (strcmp(kids[i], search) == 0) {
            printf("Found at row:  %d", i + 1);
            status = 1;
        }
    }

    if (status == 0) {
        printf("Not found.");
    }

    return 0;
}