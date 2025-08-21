#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi Hello My name is Smit"},ch;
	int i;
	char len=strlen(text);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(isupper(ch))
		{
			printf("\nUppercase ");
			printf("%c",ch);
		}
		else if(islower(ch))
		{
			printf("\nLowercase ");
			printf("%c",ch);
		}
	}
	
}
