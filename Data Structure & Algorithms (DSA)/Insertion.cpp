#include<stdio.h>
int main()
{
	int n,num,pos;
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
	
	printf("\nEnter the number to be inserted \n");
	scanf("%d",&num);
	printf("\nEnter the position to insert the number \n");
	scanf("%d",&pos);
	if((pos<0)||(pos>n))
	{
		printf("Invalid position");
	}
	else
	{
		for(int i=n-1;i>=pos;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[pos]=num;
		n=n+1;
		
		printf("\nArray after insertion \n");
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	
	return 1;
}
