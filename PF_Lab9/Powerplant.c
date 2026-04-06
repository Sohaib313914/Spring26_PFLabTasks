#include <stdio.h>

float toMJ(float k) { 
return k * 3.6; 
}
float toBTU(float k) {
 return k * 3412.14; 
 }
float toCal(float k) {
 return k * 859845.0;
  }

int main() {
    float reading;
    printf("Enter kWh: ");
    scanf("%f", &reading);

    printf("Megajoules: %.2f\n", toMJ(reading));
    printf("BTU: %.2f\n", toBTU(reading));
    printf("Calories: %.2f\n", toCal(reading));
    printf("Direct call MJ: %.2f\n", toMJ(reading));
    
    return 0;
}