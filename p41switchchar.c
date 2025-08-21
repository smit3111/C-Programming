#include<stdio.h>
main()
{
	int pages,words,price;
	char op;
	printf("\nPress x for Xerox");
	printf("\nPress t for Typing");
	printf("\nEnter choice=");
	scanf("%c",&op);
	
	switch(op)
	{
		case 'x':
		case 'X':
			printf("\nEnter your pages=");
			scanf("%d",&pages);
			if(pages>=50)
				{
				price=pages*1;
				printf("\nTotal price to pay =%d",price);
				}
			else
				{
				price=pages*2;
				printf("\nTotal price to pay =%d",price);
				}
			break;
		
		case 't':
		case 'T':
			printf("\nEnter your words to type=");
			scanf("%d",&words);
			if(words>=50)
			{
			
				price=words*1;
				printf("\nTotal price to pay=%d",price);
			}
			else
			{
				price=words*2;
				printf("\nTotal price to pay=%d",price);
			}
			break;
			
		default:
			printf("\nTry again");				
	}	
			
	
}
// + - * /
// s c
