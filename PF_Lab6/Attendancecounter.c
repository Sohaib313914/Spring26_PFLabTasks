#include<stdio.h>
int main()
{
	int a, i;
	
	for(i = 1; i<=30; i++ ){
		printf("Enter attendance status: ");
		scanf("%d", &a);
		if(a == 1)
		printf("Present\n");
		else
		printf("Absent\n");
}
	return 0;
}
