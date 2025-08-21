#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"hi hello my name is Smit"},ch;
	int i;
	char len=strlen(text);
	char cha,c;
	
	printf("Enter character you want to change=");
	scanf("%c",&cha);	
	printf("\nEnter new character=");
	scanf(" %c",&c);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];	
		if(cha==ch)
		{
			printf("%c",c);
		}
		else
		{
			printf("%c",ch);
		}
	}
}
