#include<stdio.h>
int main()
{
	float balance, withdraw;
	
	printf("Enter initial value: ");
	scanf("%f", &balance);
	while(balance > 0)
	{
	printf("\nEnter withdrawal amount: ");
	scanf("%f", &withdraw);
	balance = balance - withdraw;
	printf("Remaining balance is: %.2lf\n", balance);
}
	 printf("\nBalance exhausted. Transaction completed.\n");
    return 0;

}
