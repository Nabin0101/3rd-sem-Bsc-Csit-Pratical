#include<stdio.h>
#include<stdlib.h>
#define max 5
int rear=-5,front=0,count=0;
int queue[max];
void enqueue()
{
	if(rear==max-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		int a;
		printf("Enter a data to be inserted\n");
		scanf("%d",&a);
		rear=rear+1;
		queue[rear]=a;
		count++;
	}
}
	void dequeue()
	{
		if(rear<front)
		{
			printf("Queue is empty\n");
		}
		else
		{
			printf("Data to be deleted is %d\n",queue[front]);
			front++;
			count--;
		}
	}
int main()
{
	int choice;
	do
	{
		if(count==0)
		{
			rear=-1;
			front=0;
		}
		printf("\n Enter your choice \n1.Enqueue \n2.Dequeue \n3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				exit(0);
		}
	}while(choice<=3);
	return 0;
}