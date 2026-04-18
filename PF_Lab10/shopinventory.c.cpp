#include <stdio.h>

int main() {
    FILE *file;
    char item[50];
    int qty;
    int limit;

    file = fopen("inventory.txt", "a");
    printf("How many items: ");
    scanf("%d", &limit);

    for (int k = 0; k < limit; k++) {
        printf("Item: ");
        scanf("%s", item);
        printf("Qty: ");
        scanf("%d", &qty);
        fprintf(file, "%s %d\n", item, qty);
    }
    fclose(file);

    file = fopen("inventory.txt", "r");
    printf("\nInventory:\n");
    while (fscanf(file, "%s %d", item, &qty) != EOF) {
        printf("%s is %d\n", item, qty);
    }
    fclose(file);

    return 0;
}