// Lab Work 11
//Poker Test

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

				    
	int OF[3];
	float EF[3],pr[3];
	int i,j,N;
	float chi_sqr_value,cr_value;
	printf("\n\n \t\t POKER TEST\n");
	printf("\t\t __________\n\n");
	printf("\n \tEnter Total number of values: \t");
	scanf("%d",&N);
	printf("\n \tEnter frequency of all digits same \t: ");
	scanf("%d",&OF[0]);
	printf("\n \tEnter frequency of all digits different \t: ");
	scanf("%d",&OF[1]);
	printf("\n \tEnter frequency of exactly one pair of digits same \t: ");
	scanf("%d",&OF[2]);
	
	// calculation of probability of each case of three digits number
	pr[0]= 0.1*0.1; // all digits same
	pr[1] = 0.9*0.8; // all digits different
	pr[2] = 1- (pr[0] + pr[1]); // exactly one pair same
	
	// Expected frequency calculation
	EF[0]= N*pr[0];
	EF[1]= N* pr[1];
	EF[2]= N*pr[2];
	
	printf("\n\n \tClass i  \t Oi \t\t Ei\t\t squre(Oi-Ei)/Ei:\n ");
	//calculation of chi_square value
	for(i=0;i<3;i++)
	{
        printf( "\n\t%d\t\t %d\t\t %f\t\t %.2f",i+1,OF[i],EF[i],pow((OF[i]-EF[i]),2)/EF[i]);
		chi_sqr_value += pow((OF[i]-EF[i]),2)/EF[i];
	}
	
    printf("\n\n      The calculated value of chi_squre : %.2f",chi_sqr_value);	
   		  
    printf("\n\n\n   Null Hypothesis: Ho: The numbers are independent.");
	printf("\n   Alternative hypothesis: H1: The numbers are not independent.");
    	
	printf("\n\n\n  Enter the Critical valude of chi_Score:"); // chi_alpha = 5.99
	scanf("%f", &cr_value);
	if(chi_sqr_value<cr_value)
	{
		//printf("\n   **************************");
		printf("\n     Hypothesis is Accepted.\n\n\n");
	}
	else
	printf("\n          Hypothesis is rejected");
	getch();
	return 0;


}

