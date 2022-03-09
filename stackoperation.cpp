#include<stdio.h>
#include<stdlib.h>
#define max 5
int tos=-1,stack[max];
void push()
{
	if(tos==max-1)
	{
		printf("\nStack is full");
	}
	else
	{
		int a;
		printf("\nEnter a data to be pushed into a stack");
		scanf("%d",&a);
		tos=tos+1;
		stack[tos]=a;
	}
}
void pop()
{
	if(tos<0)
	{
		printf("\n Stack is empty");
	}
	else
	{
		printf("The data popped from a stack is:%d",stack[tos]);
		tos=tos-1;
	}
}
int main()
{
	int choice;
	do
	{
		printf("\n Enter your choice \n1.push \n2.pop \n3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				exit(0);
		}
	} while(choice<=3);
	return 0;
}