#include<stdio.h>
main()
{
	int no,pages,words,price;
	printf("\nEnter choice=");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1:
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
		
		case 2:
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
