#include<stdio.h>
void quicksort(int num[25],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(num[i]<=num[pivot]&& i<last)
			{
				i++;
			}
			while(num[j]>num[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;	
			}
		}
		temp=num[pivot];
		num[pivot]=num[j];
		num[j]=temp;
		quicksort(num,first,j-1);
		quicksort(num,j+1,last);
	}
}
int main()
{
	int i,n,num[25];
	printf("Enter no of terms\n");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	quicksort(num,0,n-1);
	printf("Order of sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
