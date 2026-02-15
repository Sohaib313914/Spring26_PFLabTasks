#include<stdio.h>
int main()
{
int balance;
	printf("Enter your bank balance: ");
	scanf("%d", &balance);	
	if(balance > 0)
		printf("Positive Balance");
	else if(balance < 0)
		printf("Overdrawn");
	else
printf("Zero balance");
return 0;
}

