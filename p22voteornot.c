#include<stdio.h>
main()
{
	int age;
	printf("Enter your age=");
	scanf("%d",&age);
	
	if(age>=18)
		printf("\nYou can vote");
	else
		printf("\nYou cannot vote");
}
