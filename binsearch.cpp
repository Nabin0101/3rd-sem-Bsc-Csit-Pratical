#include<stdio.h>
#include<conio.h>
int bin_search(int n,int a[],int key);
int main()
{
	int i,n,key,pos,a[20];
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the data to be searched:\n");
	scanf("%d",&key);
	pos=bin_search(n,a,key);
	if(pos>=0)
	{
		printf("%d is position of array",pos);
	}
	else
	{
			printf("Search unsucessfull\n");
	}
	return 0;
}
int bin_search(int n,int a[],int key)
{
	int bottom=0,mid,top=n-1;
	while(bottom<=top)
	{
		mid=(top+bottom)/2;
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			top=mid-1;
		}
		else
		{
			bottom=mid+1;
		}
	}
	return-1;
}

