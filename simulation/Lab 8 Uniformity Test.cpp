// Lab Work 8
//chi-Square Test

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float R[100] = {6, 7, 0, 6, 9, 9, 0, 6, 4, 6,
				    4, 0, 8, 2, 6, 6, 1, 2, 6, 8,
				    5, 6, 0, 4, 7, 1, 3, 5, 0, 7,
				    1, 4, 9, 8, 6, 0, 9, 6, 6, 7,
				    1, 0, 4, 7, 9, 2, 0, 1, 4, 8, 6, 
					9, 7, 7, 5, 4, 2, 3, 3, 3, 6, 0,
					5, 8, 2, 5, 8, 8, 3, 1, 4, 0, 8,
					1, 7, 0, 0, 6, 2, 8, 5, 6, 0, 8, 0, 6, 9,
					7, 0, 0, 3, 1, 5, 4, 3, 8, 3, 3, 2, 4 };
	int Oi[10], Ei[10];
	int i;
	float ki_sqr,cr_value;
	int N = 0;
	int r;
	printf("\n\n The Given sample of the data:\n\n\n ");
     for(i=0;i<100;i++)
   	 
		{
		printf("%.2f\t", R[i]);
		if (i%10 ==9)
		  printf("\n\n");
   }
    printf("\n  Null Hypothesis: Ho: The numbers are uniformly distibuted.");
	printf("\n Alternative hypothesis: H1: The numbers are not uniformly distributed.");
    printf("\n\n\n Finding ki -square value from sample data:\n");
	for(i =0;i<10;i++)
		{
			Oi[i]= 0;
			Ei[i] =0;
		}
	for(i=0;i<100;i++)
	{
	
	  if(R[i] == float(0))
	   			Oi[0]++;
	   else if(R[i]==float(1))
	   			Oi[1]++;
	   else if( R[i]==float(2))
	   			Oi[2]++;
	   else if( R[i]==float(3))
	   			Oi[3]++;
	   else if( R[i]==float(4))
	   			Oi[4]++;
	   else if(R[i]==float(5))
	   			Oi[5]++;
	   else if(R[i]== float(6))
	   			Oi[6]++;
	   else if(R[i]==float(7))
	  		 Oi[7]++;
	   else if(R[i]==float(8))
	  		 Oi[8]++;
	   else
	   		Oi[9]++;
	}
	
    
	for (i=0;i<10;i++)
   {
    
    N += Oi[i];
   }
	for (i=0;i<10;i++)
   {
    Ei[i]= N/10;
   
   }
   printf( "\n Class  \t Oi  \t\t Ei \t\t Oi-Ei \t  Square(Oi -Ei)/Ei");
    for (i=0;i<10;i++)
   {
       printf( "\n %d \t\t %d \t\t %d\t \t %d \t\t %.2f",i+1,Oi[i],Ei[i],(Oi[i]-Ei[i]),pow((Oi[i]-Ei[i]),2));
        ki_sqr += pow((Oi[i]-Ei[i]),2)/Ei[i];
   }
   printf("\n \t Total = %d \t\t\t\t    chi-Square = %.2f",N,ki_sqr);
    
    printf("\n\n\n Enter the Critical valude of Chi_square");
	scanf("%f", &cr_value);
	if(ki_sqr<cr_value)
	printf("\nHypothesis is Accepted");
	else
	printf("\nHypothesis is rejected");
	getch();
	return 0;


}

