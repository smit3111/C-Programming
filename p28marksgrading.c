#include<stdio.h>
main()
{
	int maths,eng,ss,total;
	printf("Enter maths marks=");
	scanf("%d",&maths);
	printf("\nEnter eng marks=");
	scanf("%d",&eng);
	printf("\nEnter ss marks=");
	scanf("%d",&ss);
	total=maths+eng+ss;
	
	if(total<50)
		printf("\nC grade");
	else if(total>=50 && total<100)
		printf("\nB grade");
	else if(total>100)
		printf("\nA grade");
	else
		printf("\nFail");	
	
}
