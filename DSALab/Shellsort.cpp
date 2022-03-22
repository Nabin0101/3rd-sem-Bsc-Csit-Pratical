#include<stdio.h>
int main()
{
	int a[100],n,i,j,k,inc,temp;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	{
		for(inc=n/2;inc>0;inc/=2)
		{
			for(i=inc;i<n;i++)
			{
				temp=a[i];
				for(j=i;j>=inc;j-=inc)
				{
					if(temp<a[j-inc])
					{
						a[j]=a[j-inc];
					}
					else
					{
						break;
					}
				}
				a[j]=temp;
			}
		}
	printf("After sorting\n");
	for(k=0;k<5;k++)
	{
		printf("%d\t",a[k]);
	}
}
}