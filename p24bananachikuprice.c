#include<stdio.h>
main()
{
	int ban,chiku;
	printf("Enter banana price=");
	scanf("%d",&ban);
	printf("\nEnter chiku price=");
	scanf("%d",&chiku);
	
	if(ban>chiku)
		printf("\nBanana is costly");
	else
		printf("\nChiku is costly");
		
}
