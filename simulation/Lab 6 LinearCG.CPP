//Lab 6
//   Linear Congruential Method of Random Number Generation

#include<stdio.h>
#include<conio.h>
int main()
{
	 int i,n,c,a;
	 int x[100] ,m;
	float r[100];
	printf("\nEnter the value of multiplier:");
	scanf("%d",&a);
	printf("\nEnter the value of increment:");
	scanf("%d",&c);
	printf("\nEnter the value of m:");
	scanf("%d",&m);
	printf("\n Enter the value of seed (X0): ");
	scanf("%d",&x[0]);
    printf("\n X[i] \t\t R[i]");
    printf( "\n**********************");
	for(i=0;i<5;i++)
	{
		x[i+1]=(a*x[i]+c)%m;
		printf("\nx[%2d]= %2d",i,x[i]);
	
		r[i]=float(x[i])/float(m);
	 	printf("\t%.3f",r[i]);
	}
	 
}
// for output multiplier 5 inceremnt 4 m 8 seed 2//
