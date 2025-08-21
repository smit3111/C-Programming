#include<stdio.h>
main()
{
	int no,nxt,pre;
	printf("Enter number=");
	scanf("%d",&no);
	nxt=no+1;
	pre=no-1;
	printf("\nNext number=%d",nxt);
	printf("\nPrevious number=%d",pre);
}
