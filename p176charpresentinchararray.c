#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"hi hello my name is Smit"},ch;
	int i,c=0;
	char len=strlen(text);
	char cha;
	
	printf("Enter character=");
	scanf("%c",&cha);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		
		if(ch==cha)
		{
			c++;
		}
	}
	printf("\nCharacter is present %d times",c);
}
