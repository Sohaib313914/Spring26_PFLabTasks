#include <stdio.h>

int main()
{
    int category, type, quantity;
    int price = 0, total;

    printf("Select Book Category:\n");
    printf("1 - Fiction\n");
    printf("2 - Non-Fiction\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:   // Fiction
            printf("\nSelect Fiction Type:\n");
            printf("1 - Novel (Rs. 600)\n");
            printf("2 - Comic (Rs. 300)\n");
            printf("Enter choice: ");
            scanf("%d", &type);

            switch(type)
            {
                case 1:
                    price = 600;
                    printf("\nYou selected: Fiction - Novel\n");
                    break;

                case 2:
                    price = 300;
                    printf("\nYou selected: Fiction - Comic\n");
                    break;

                default:
                    printf("Invalid Fiction Type!\n");
                    return 0;
            }
            break;

        case 2:   // Non-Fiction
            printf("\nSelect Non-Fiction Type:\n");
            printf("1 - Biography (Rs. 800)\n");
            printf("2 - Self-Help (Rs. 500)\n");
            printf("Enter choice: ");
            scanf("%d", &type);

            switch(type)
            {
                case 1:
                    price = 800;
                    printf("\nYou selected: Non-Fiction - Biography\n");
                    break;

                case 2:
                    price = 500;
                    printf("\nYou selected: Non-Fiction - Self-Help\n");
                    break;

                default:
                    printf("Invalid Non-Fiction Type!\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Category!\n");
            return 0;
    }

    printf("\nEnter Quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Total Bill = Rs. %d\n", total);

    return 0;
}

