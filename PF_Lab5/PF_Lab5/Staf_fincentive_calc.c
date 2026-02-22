#include <stdio.h>

int main()
{
    float salary, incentive;
    int service;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Years of Service: ");
    scanf("%d", &service);

    incentive = (service > 15) ? (0.35 * salary) :
                (service > 7)  ? (0.20 * salary) :
                                 (0.05 * salary);

    printf("Incentive Amount = Rs. %.2f\n", incentive);

    return 0;
}

