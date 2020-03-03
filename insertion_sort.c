#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertion_sort(int *,int);
void main()
{
	int n,arr[10],i;
	int start_t,end_t;
	double timetaken;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("The elements before sorting are\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	start_t = clock();
	insertion_sort(arr,n);
	end_t = clock();

	timetaken = end_t-start_t;
	printf("Time taken to sort the elements using insertion sort is %f\n",timetaken);
}

void insertion_sort(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp = a[i];
		j = i;
		
		while(j > 0 && a[j-1] > temp)
		{
			a[j] = a[j-1];
			j = j-1;
		}
		a[j] = temp;
	}
	printf("The elements after sorting are\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");	
}	

	
