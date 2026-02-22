#include <stdio.h>

int main() {
    float dataUsage, rate, totalBill;
    int customerType; 

    
    printf("Enter Data Usage (in GB): ");
    scanf("%f", &dataUsage);

    
    printf("Enter Customer Type (1 = Prepaid, 2 = Postpaid): ");
    scanf("%d", &customerType);

    if (dataUsage <= 2) {
        rate = 50;
    }
    else if (dataUsage > 2 && dataUsage <= 10) {
        if (customerType == 1) {
            rate = 40;   
        }
        else if (customerType == 2) {
            rate = 35;   
        }
    }
    else { 
        rate = 25;
    }
    
    totalBill = dataUsage * rate;

    printf("\nTotal Mobile Data Bill: Rs. %.2f\n", totalBill);

    return 0;
}

