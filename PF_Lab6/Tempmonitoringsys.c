#include<stdio.h>
int main()
{
	float temp, avg, sum = 0;
	int count = 0;
	
	printf("Enter value of temperature: ");
	scanf("%f", &temp);
	
	while(temp != -999){
		sum = sum + temp;
		count++;
		printf("\nEnter temperature again: ");
		scanf("%f", &temp);
	}
	
	if(count > 0){
	avg = sum/count;
	printf("The average temperature is: %.2f\n", avg);
}
	else
	printf("No valid temperature entered\n");
	
	return 0;
}
