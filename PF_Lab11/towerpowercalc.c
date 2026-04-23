#include <stdio.h>

int totalPower(int floors) {
    if (floors == 1) {
        return 100; 
    }
    
    int currentPower = 100;
    for(int i = 1; i < floors; i++) {
        currentPower *= 2;
    }
    
    /* adds current floor power to the sum of all lower floors */
    return currentPower + totalPower(floors - 1);
}

int main() {
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);
    
    printf("Total power consumption: %d kWh\n", totalPower(n));
    
    /* Trace for totalPower(4):
       totalPower(4) calls totalPower(3) + 800
       totalPower(3) calls totalPower(2) + 400
       totalPower(2) calls totalPower(1) + 200
       totalPower(1) returns 100
       Sum: 800 + 400 + 200 + 100 = 1500
    */
    
    return 0;
}
