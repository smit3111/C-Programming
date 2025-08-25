#include<stdio.h>

struct book
{
int bid;
char bname[20];
int bprice;	
};

main()
{
	struct book b1,b2,b3;
	
	printf("\nEnter bid =>");
	scanf("%d",&b1.bid);
	
	fflush(stdin);
	printf("\nEnter bname =>");
	gets(b1.bname);
	
	printf("\nEnter bprice =>");
	scanf("%d",&b1.bprice);


	printf("\nEnter bid =>");
	scanf("%d",&b2.bid);
	
	fflush(stdin);
	printf("\nEnter bname =>");
	gets(b2.bname);
	
	printf("\nEnter bprice =>");
	scanf("%d",&b2.bprice);


	printf("\nEnter bid =>");
	scanf("%d",&b3.bid);
	
	fflush(stdin);
	printf("\nEnter bname =>");
	gets(b3.bname);
	
	printf("\nEnter bprice =>");
	scanf("%d",&b3.bprice);

	
	printf("\nBid = %d Bname = %s Bprice = %d",b1.bid,b1.bname,b1.bprice);	
	printf("\nBid = %d Bname = %s Bprice = %d",b2.bid,b2.bname,b2.bprice);	
	printf("\nBid = %d Bname = %s Bprice = %d",b3.bid,b3.bname,b3.bprice);	
}
