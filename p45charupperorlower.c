#include<stdio.h>
main()
{
	char ch;
	printf("Enter character=");
	scanf("%c",&ch);
	
	if(isupper(ch))
	{
		printf("\nIt is uppercase");
	}
	else if(islower(ch))
	{
		printf("\nIt is lowercase");
	}
	else{
		printf("\nIt is",ch);
	}
	
}
