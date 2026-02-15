#include <stdio.h>

int main() {
    int choice;
    float balance = 10000;
    float amount;

    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your current balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal successful!\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance!\n");
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance = balance + amount;
            printf("Deposit successful!\n");
            printf("Updated balance: %.2f\n", balance);
            break;

        case 4:
            printf("Thank you for using ATM. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select between 1 to 4.\n");
    }

    return 0;
}

