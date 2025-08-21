#include<stdio.h>
#include<string.h>
void main()
{
	char text[100]={"smit"},ch;
	int len=strlen(text);
	int i,c=0;
	char rev[100],ch1;
	
	for(i=0;i<len;i++)
	{
		ch=text[i];
		ch1=text[len-i-1];		
		if(ch1==ch)
		{
			c=1;
		}
		
	} 
	if(c==1)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot Palindrome");
	}
}
