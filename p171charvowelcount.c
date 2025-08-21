#include<stdio.h>
#include<string.h>
void main()
{
	char text[]={"Hi Hello My name is Smit"},ch;
	int c=0,i;
	char len=strlen(text);
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			c++;
		}
	}
	printf("\nTotal number of vowel=%d",c);
}
