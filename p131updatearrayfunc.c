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
	int size,i;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	update(size,arr);
	return 0;
}
