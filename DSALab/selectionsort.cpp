#include<stdio.h>
int main()
{
	int a[100],n,i,j,b,c;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		b=i;
		for(j=i+1;j<n;j++)
		{
			if(a[b]>a[j])
			{
				b=j;
			}
		}
			if(b!=i)
			{
				c=a[i];
				a[i]=a[b];
				a[b]=c;
			}
		}
	printf("Sorted Array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}