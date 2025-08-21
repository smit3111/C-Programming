#include<stdio.h>
#include<math.h>
int main()
 {
    int  rem,count=0,no,result=0,original_no;
    printf("Enter number=");
    scanf("%d",&no);
         original_no=no;
    int temp=no;
    while(no!=0)
    {
    	no=no/10;
    	count++;
	}
	
	 while(original_no!=0)
    {
    	rem=original_no%10;
    	result+=pow(rem,count);
		original_no=original_no/10;
	}
    if(result==temp)
    {
        printf("\nIt is amstrong number");
    }
    else{
    	printf("\nIt is not amstrong number");}
	return 0;
}

