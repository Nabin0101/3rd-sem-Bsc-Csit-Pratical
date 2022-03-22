#include<stdio.h>
#include<conio.h>
int seqsearch(int target,int a[],int n)
{
	int key=0;
	while (key<n)
	{
		if(a[key]==target)
		{
			return key;
		}
		else
		{
			key++;
		}
	}
	return-1;
}
int main()
{
	int i,n,target,pos,a[20];
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the data to be searched:\n");
	scanf("%d",&target);
	pos=seqsearch(target,a,n);
	if(pos<0)
	{
		printf("Search unsucessfull\n");
	}
	else
	{
		printf("%d is in %d position of array",target,pos);
	}
	return 0;
}


