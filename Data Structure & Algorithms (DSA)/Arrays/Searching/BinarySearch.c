#include<stdio.h>
int main()
{
	int n,item,temp,beg,end,mid,flag=0,loc;
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
	
	for(int i=1;i<n;i++)
	{	//sorting the array (can apply any sorting technique)
		for(int j=0;j<(n-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\nThe Sorted Array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		mid=(int)(beg+(end-beg)/2);
		if(arr[mid]==item)
		{
			flag=1;
			loc=mid;
			printf("\nElement %d found at index %d",item,loc);
			break;
		}
		else if(item<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	if(flag==0)
	{
		printf("\nElement %d not found",item);
	}
	
	return 1;
}
