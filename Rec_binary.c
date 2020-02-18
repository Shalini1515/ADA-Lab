#include<stdio.h>
#include<stdlib.h>
int binary_search(int *,int,int,int,int);
void main()
{
	int n;
	int arr[10],i,key,mid,pos;
	printf("enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Enter the key element to search\n");
	scanf("%d",&key);
	pos = binary_search(arr,0,n-1,key,n);
	if(pos!=0)
		printf("the key element %d is found at %d pos\n",key,pos+1);
	else
		printf("Key element not found\n");
	return;
}

int binary_search(int array[],int low,int high,int key,int n)
{
	int mid;
	if(low>=n)
		return 0;	
	if(high >= low)
		 mid=(low+high)/2;

	if(array[mid]==key)
	{
			
		return mid;
	}
		
	if(array[mid]>=key)
	{
		return binary_search(array,low,mid-1,key,n);
		
	}
	else
		return binary_search(array,mid+1,high,key,n);
	return 0;

}





