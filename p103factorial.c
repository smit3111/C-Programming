#include<stdio.h>
main()
{
	int i,no;
	printf("Enter number=");
	scanf("%d",&no);
	
	do
	{
		printf("%d x",i);
		i++;		
	}
	while(i<=no);
	
	i=no-1;
   do 
	{
       	printf("%d x", i);
        i--;
    }
	while (i >= 1);

}
