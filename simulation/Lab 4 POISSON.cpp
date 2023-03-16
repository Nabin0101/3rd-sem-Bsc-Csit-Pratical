//Lab 4
// Poisson Distribution:
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

float lamda,pr,i,a;
int x;
printf("\nEnter the value of lamda=");
scanf("%f",&lamda);

printf("\n probability distribution of x =0 .......15");
for(x=0;x<=15;x++)
{
    a=1;
	for(i=1;i<=x;i++)
	{
		a=a*i;
	}
	pr= pow(2.71,-lamda) *pow(lamda,x)/a;
	printf("\n pr(X=%2d) = %f",x,pr);
}
return 0;
getch();

}








