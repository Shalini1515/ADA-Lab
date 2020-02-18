#include<stdio.h>
int rec_linear(int *,int ,int ,int);
void main()
{
	int arr[10],n,key,i,pos;
	printf("Enter the number of elements of the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the key element to be searched\n");
	scanf("%d",&key);
	pos=rec_linear(arr,key,0,n);
	if(pos!=0)
	
		printf("The key element %d is found at %d position\n",key,pos);
	else
		printf("Key element not Found\n");
	return;
}


int rec_linear(int a[],int k,int pos,int n)
{
	if(pos>=n)
		return 0;
	if(a[pos]==k)
	{
		pos = pos + 1;
		return pos;
	}
	else
	{
		return rec_linear(a,k,pos+1,n);
	}
}

	

