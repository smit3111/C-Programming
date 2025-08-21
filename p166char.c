#include<string.h>
#include<stdio.h>

main()
{
	char text[]={"Hi Hello My name is Sahil"};
	int len=strlen(text);
	int i;
	char ch;
		
	for(i=0;i<len;i++)
	{
		ch=text[i];
		printf("\n%c",ch);	
	}
}


