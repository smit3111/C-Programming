#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"hello my name is smit"},ch;
	int len=strlen(text);
	int i,pos;
	printf("Enter position=");
	scanf("%d",&pos);
	pos=pos-1;
	if(pos<len)
	{
		printf("%c",text[pos]);		
	}
	else{
		printf("Not ");
	}
}
