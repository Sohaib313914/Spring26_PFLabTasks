#include<stdio.h>

float triageScore(int severity, int age, int vitals){
   return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}

int main(){
    float score;
    int severity, age, vitals;

    printf("Enter the value of severity: ");
    scanf("%d", &severity);
    printf("Enter the value of age: ");
    scanf("%d", &age);
    printf("Enter the value of vitals: ");
    scanf("%d", &vitals);

score = triageScore(severity, age, vitals);
if (score > 7.0)
{
    printf("Immediate attention required");
}
else if (score >= 4.0)
{
    printf("Moderate priority");
}
else
printf("Can wait");

return 0;
}