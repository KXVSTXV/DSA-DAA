#include<stdio.h>
int main()
{
	int n,item,flag=0;
	printf("Enter size of array ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element at position %d ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter element to be searched ");
	scanf("%d",&item);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
			flag=1;
			printf("\nElement %d found at index %d",item,i);
			break;
		}
	}
	if(flag==0)
	{
		printf("\nElement %d not found",item);
	}
	
	return 1;
}
