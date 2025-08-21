#include<stdio.h>
main()
{
	int maths,eng,ss,total;
	printf("Enter maths marks=");
	scanf("%d",&maths);
	printf("\nEnter english marks=");
	scanf("%d",&eng);
	printf("\nEnter ss marks=");
	scanf("%d",&ss);
	total=maths+eng+ss;
	printf("\nTotal marks=%d",total);
	
	if(total>50)
		printf("\nParty time");
	else
		printf("\nCall your dad");

}
