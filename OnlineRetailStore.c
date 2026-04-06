#include<stdio.h>

float applydiscount(float price, int tier){
    float discountrate = 0.0;

    if (tier == 1)
    {
        discountrate = 0.05;
    }
    else if (tier == 2)
    {
        discountrate = 0.10;
    }
    else if (tier == 3)
    {
        discountrate = 0.20;
    }
    else if (tier == 4)
    {
        discountrate = 0.30;
    }
    else{
    discountrate = 0.0;
    }
    return price * (1.0 - discountrate);
}

void printinvoice(float original, float discounted){
 float discountamount = original - discounted;
 float deliverycharge = 0.0;
 
 if (discounted < 2000)
 {
    deliverycharge = 150;
 }
float total = deliverycharge + discounted;

 printf("Original price: %.2f\n", original);
 printf("Discount amount: %.2f\n", discountamount);
 printf("Price after discount: %.2f\n", discounted);
 printf("Dilevery charge: %.2f\n", deliverycharge);
 printf("Total payable amount: %.2f\n", total);
}

int main(){
    float price;
    int tier;
    printf("Enter original order price: ");
    scanf("%f", &price);
    printf("Enter Membership Tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    float discountedprice = applydiscount(price, tier);
    printinvoice(price, discountedprice);
    return 0;
}