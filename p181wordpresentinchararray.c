#include<stdio.h>
#include<string.h>
void main()
{
	char text[100]={"hi hello my name is smit hi hello my name is smit hi hello my name is smit "},ch,ch1;
	int len=strlen(text);
	int i,c=0;
	char text1[10]={};
	
	printf("Enter word=");
	scanf("%s",&text1);
	for(i=0;i<len;i++)
	{
		ch=text[i];
		ch1=text1[i];	
		if(ch==' ' && ch=='/0')
		{
			c++;
		}
	}
	printf("\nWord is present= %d",c);
}
