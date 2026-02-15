#include<stdio.h>
int main()
{
float data;
	printf("Enter total Data usage in GB: ");
	scanf("%f", &data);	
	if(data <= 50)
		printf("Basic User");
	else if(data >=51 && data <= 150)
		printf("Standard User");
	else
printf("Heavy user");
return 0;
}

