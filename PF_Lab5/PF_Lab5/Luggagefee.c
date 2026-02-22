#include <stdio.h>

int main()
{
    char mainType, subType;
    float weight, rate = 0, totalFee;

    printf("Select Main Luggage Type:\n");
    printf("1 - Handbag\n");
    printf("2 - Checked Bag\n");
    printf("3 - Sports Equipment\n");
    printf("Enter choice: ");
    scanf(" %c", &mainType);

    switch(mainType)
    {
        case '1':

            printf("Select Handbag Type:\n");
            printf("1 - Small (Rs.100 per kg)\n");
            printf("2 - Large (Rs.200 per kg)\n");
            printf("Enter choice: ");
            scanf(" %c", &subType);

            switch(subType)
            {
                case '1':
                    rate = 100;
                    break;

                case '2':
                    rate = 200;
                    break;

                default:
                    printf("Invalid Handbag Type!\n");
                    return 0;
            }
            break;

        case '2':

            printf("Select Checked Bag Type:\n");
            printf("1 - Domestic (Rs.300 per kg)\n");
            printf("2 - International (Rs.500 per kg)\n");
            printf("Enter choice: ");
            scanf(" %c", &subType);

            switch(subType)
            {
                case '1':
                    rate = 300;
                    break;

                case '2':
                    rate = 500;
                    break;

                default:
                    printf("Invalid Checked Bag Type!\n");
                    return 0;
            }
            break;

        case '3':
            rate = 1000;
            break;

        default:
            printf("Invalid Main Luggage Type!\n");
            return 0;
    }

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    totalFee = rate * weight;

    printf("Total Luggage Fee = Rs. %.2f\n", totalFee);

    return 0;
}

