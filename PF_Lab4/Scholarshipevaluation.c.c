#include <stdio.h>

int main()
{
	int M1, M2, M3, M4, M5;
	int Total_marks = 500;
	float per, Marksobtain;
		printf("Enter you marks of subject 1: \n");
		scanf("%d", &M1);
		printf("Enter you marks of subject 2: \n");
		scanf("%d", &M2);
		printf("Enter you marks of subject 3: \n");
		scanf("%d", &M3);
		printf("Enter you marks of subject 4: \n");
		scanf("%d", &M4);
		printf("Enter you marks of subject 5: \n");
		scanf("%d", &M5);
		
		Marksobtain = M1 + M2 + M3 + M4 + M5;
		per = ( Marksobtain / Total_marks) * 100;
		
		printf("Your percentae is: %2lf", per);
}
