#include <stdio.h>

int main()
{
int per;
printf("Enter your attendance percentage: ");
scanf("%d", &per);

if(per >= 75)
{
	printf("Selected for Tournament");
}
else
	printf("Not Selected");
	
	return 0;
}

