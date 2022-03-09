#include<stdio.h>
void tower(int,char,char,char);
int main()
{
	int n;
	printf("Enter the no of disks\n");
	scanf("%d",&n);
	printf("The sequence of moves involved in the Towero Hanoi are:\n");
	tower(n,'A','c','B');
	return 0;
}
void tower(int n,char A,char C,char B)
{
	if(n==1)
	{
		printf("\n Move disk 1 from peg %c to peg %c",A,C);
		return;
	}
	tower(n-1,A,B,C);
	printf("\n Move disk %d from peg %c to peg %c",n,A,C);
	tower(n-1,B,C,A);
}