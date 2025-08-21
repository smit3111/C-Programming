#include<stdio.h>

void print_array(int arr[], int size)
{
    int i;
    
	for(i = 0; i < size; i++)
    {
        printf("\n%d", arr[i]);
    }
}

void update(int size,int arr[size])
{
	int i,new_value;
	
	printf("\nEnter index value=");
	scanf("%d",&i);
	printf("\nEnter new value=");
	scanf("%d",&new_value);
	
	arr[i]=new_value;
	print_array(arr,size);	
}

int main()
{
	int size,i,choice;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter 1 for update \nEnter 2 for print=");
	scanf("%d",&choice);
	
	if(choice==1)
	{
			update(size,arr);
	}
	else if(choice==2)
	{
		print_array(arr,size);
	}
	else
		printf("\nWrong choice");
	return 0;
}
