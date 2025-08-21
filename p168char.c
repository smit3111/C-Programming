#include<string.h>
#include<stdio.h>

main()
{
	char text[]={"Hi Hello My name is Sahil"};
	int len=strlen(text);
	int i,c=0;
	char ch;
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(ch==' ')
		{
			
		}
		else{
			printf("%c",ch);
		}
	}
}


