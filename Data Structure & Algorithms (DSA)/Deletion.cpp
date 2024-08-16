#include<stdio.h>
int main()
{
	int n,pos;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element at position %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nOriginal Array \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("\nEnter the position to delete a number \n");
	scanf("%d",&pos);
	if((pos<0)||(pos>=n))
	{
		printf("Invalid position");
	}
	else
	{
		for(int i=pos;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		n=n-1;
		
		printf("\nArray after deletion \n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	
	return 1;
}
