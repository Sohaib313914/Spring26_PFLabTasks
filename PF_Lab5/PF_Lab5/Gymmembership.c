#include <stdio.h>

int main()
{
	int fitness_score, age;
	
	printf("Enter your fitness score: ");
	scanf("%d", &fitness_score);
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	if(fitness_score >= 85)
		if(age < 25)
		
		printf("You get 40%% discount");
		
		else
		printf("Yoy get 25%% discount");
	else if (fitness_score >= 75 && age < 30)
		printf("You get 15%% discount");
		
		else 
		printf("No discount");
		
	return 0;
}

