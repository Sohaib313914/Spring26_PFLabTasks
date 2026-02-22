#include <stdio.h>

int main()
{
    long enteredCard, correctCard = 12345678;
    int enteredPin, correctPin = 1234;
    float balance = 50000, amount;

    printf("Enter Card Number: ");
    scanf("%ld", &enteredCard);

    if (enteredCard == correctCard)
    {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin)
        {
            printf("Enter Transaction Amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) 
            {
                balance -= amount;
                printf("Transaction Successful!\n");
                printf("Remaining Balance = Rs. %.2f\n", balance);
            }
            else
            {
                printf("Insufficient Funds or Invalid Amount!\n");
            }
        }
        else
        {
            printf("Invalid PIN!\n");
        }
    }
    else
    {
        printf("Invalid Card!\n");
    }

    return 0;
}

