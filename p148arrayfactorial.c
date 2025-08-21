#include <stdio.h>

void main() 
{
    int i,n;
    int fact[100];

    printf("Enter number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++) 
	{
		fact[i]=i;
    }
	
	for(i=1;i<=n;i++)
	{
	    printf("x%d", fact[i]);
	}
}

