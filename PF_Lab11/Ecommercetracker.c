#include <stdio.h>
#include <string.h>

struct Order {
    int id;
    char user[50];
    char item[50];
    int quantity;
    float price;
    char status[20];
};

float computeTotal(struct Order o) {
    return o.quantity * o.price;
}

void filterByStatus(struct Order orders[], int n, char *st) {
    for(int i = 0; i < n; i++) {
        if(strcmp(orders[i].status, st) == 0) {
            printf("Order %d for %s is %s\n", orders[i].id, orders[i].user, st);
        }
    }
}

int main() {
    struct Order batch[4];
    for(int i = 0; i < 4; i++) {
        printf("Enter Order ID, Customer, Product, Qty, Price, Status:\n");
        scanf("%d %s %s %d %f %s", &batch[i].id, batch[i].user, batch[i].item, &batch[i].quantity, &batch[i].price, batch[i].status);
    }
    
    for(int i = 0; i < 4; i++) {
        printf("Order %d Total: %.2f\n", batch[i].id, computeTotal(batch[i]));
    }
    
    filterByStatus(batch, 4, "Shipped");
    return 0;
}