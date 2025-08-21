#include<stdio.h>

void morning()
{
	printf("\nGood Morning");
}
void afternoon()
{
	printf("\nGood Afternoon");
}
void evening()
{
	printf("\nGood Evening");
}
void night()
{
	printf("\nGood Night");
}

int main()
{
	int time1;
	printf("\nEnter time=");
	scanf("%d",&time1);
	if(time1>=5 && time1<=11)
	{
		morning();
	}
	else if(time1>=12 && time1<=16)
	{
		afternoon();
	}

	else if(time1>=17 && time1<20)
	{
		evening();
	}
	else if(time1>=20 && time1<=23 || time1>=0 && time1<=4)
	{
		night();	
	}
	else
	{
		printf("\nWrong time");
	}
}

