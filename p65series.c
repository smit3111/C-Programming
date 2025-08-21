#include<stdio.h>
main()
{
	int i,no;
	printf("Enter number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d + ",i);
	}
	
}
/*
1*2*3*4*5
1+3+5+7+9+
2+4+6+8+10+
1+4+9+16+25+
1+8+27+64+125
1+4+27+16+125
1/1+1/2+1/3+1/4+1/5+
5X4X3X2X1
-1+2-3+4-5
*/
