#include<stdio.h>
long int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
int main()
{
	int n;
	long int f;
	printf("Enter any number\n");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of %d is %ld",n,f);
	return 0;
}
