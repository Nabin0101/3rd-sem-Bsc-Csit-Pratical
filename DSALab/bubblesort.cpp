#include<stdio.h>
void bubblesort(int arr[],int n)
{
	int i ,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[100],i,n;
	printf("Enter no of elements  to be sorted\n ");
	scanf("%d",&n);
	printf("Enter the datas:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	return 0;
}