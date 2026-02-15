#include <stdio.h>

int main()
{
    int Total_amount;
    float Discount, Amount_pay; 

    printf("Enter your total purchase amount: \n");
    scanf("%d", &Total_amount);
        
    if(Total_amount >= 5000)
    {
        printf("You get 20%% Discount\n");
        Discount = Total_amount * 20 / 100.0;
        Amount_pay = Total_amount - Discount;
        printf("Payable amount: %.2f\n", Amount_pay);
    }
    else if(Total_amount >= 3000)
    {
        printf("You get 10%% Discount\n");
        Discount = Total_amount * 10 / 100.0;
        Amount_pay = Total_amount - Discount;
        printf("Payable amount: %.2f\n", Amount_pay);    
    }
    else
    {
        printf("No Discount\n");
        printf("Payable amount: %d\n", Total_amount);
    }

    return 0;
}

