#include<stdio.h>
void main()
{
	int distance,fused,fprice,toll,park;
	float tcost,fcost,costkm,feffec;
	
	printf("Enter distance(in km)=");
	scanf("%d",&distance);
	printf("\nEnter fuel used=");
	scanf("%d",&fused);
	printf("\nEnter fuel price=");
	scanf("%d",&fprice);
	printf("\nEnter toll=");
	scanf("%d",&toll);
	printf("\nEnter parking=");
	scanf("%d",&park);
	
	feffec=distance/fused;
	fcost=fused*fprice;
	tcost=fcost+toll+park;
	costkm=tcost/distance;
	
	printf("\nFuel efficiency=%f Km/L",feffec);
	printf("\nFuel cost=%f",fcost);
	printf("\nTotal cost=%f",tcost);
	printf("\nCost per km=%f",costkm);
}
