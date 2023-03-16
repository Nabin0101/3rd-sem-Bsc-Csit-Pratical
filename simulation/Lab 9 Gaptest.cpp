// Lab Work 9
//Gap Test

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float R[110] = {4, 1, 3, 5, 1, 7, 2, 8, 2, 0, 7,
	 	    		9, 1, 3, 5, 2, 7, 9, 4, 1, 6, 3,
					3, 9, 6, 3, 4, 8, 2, 3, 1, 9, 4,
					4, 6, 8, 4, 1, 3, 8, 9, 5, 5, 7,
	   				3, 9, 5, 9, 8, 5, 3, 2, 2, 3, 7,
				    4, 7, 0, 3, 6, 3, 5, 9, 9, 5, 5, 
					5, 0, 4, 6, 8, 0, 4, 7, 0, 3, 3, 
					0, 9, 5, 7, 9, 5, 1, 6, 6, 3, 8, 
					8, 8, 9, 2,	9, 1, 8, 5, 4, 4, 5,
				    0, 2, 3, 9, 7, 1, 2, 0, 3, 6, 3 };
				    
	int Oi[12],start_index[10];
	float RF[12],SX[12],FX[12],D[12];
	int i,j,l,r,k,c,a[10]={0,1,2,3,4,5,6,7,8,9};
	float D_value,cr_value,dmax;
	int N = 110;
	int Dist_digit=10;
	int total_gaps =100;
	int gap;
	int x =3;
	int ctr[10]={0,0,0,0,0,0,0,0,0,0};
	
	printf("\n\n\n \t\t    GAP TEST \n\n \t The Given sample of the data:\n\n\n ");
    for(i=0;i<110;i++)
   	{
		printf("      %.1f", R[i]);
		if (i%10 ==9)
		  printf("\n\n");
	}
		  
	for(i=0;i<110;i++)
   	{
			if (R[i]==0)
			  ctr[0]++;
			else if(R[i]==1)
			  ctr[1]++;
			else if(R[i]==2)
			  ctr[2]++;
			  else if(R[i]==3)
			  ctr[3]++;
			  else if(R[i]==4)
			  ctr[4]++;
			  else if(R[i]==5)
			  ctr[5]++;
			  else if(R[i]==6)
			  ctr[6]++;
			  else if(R[i]==7)
			  ctr[7]++;
			  else if(R[i]==8)
			  ctr[8]++;
			  else 
			  ctr[9]++;
   }
	// printf("\n\n Frequency of the digits:\n ");
	  //for(i=0;i<10;i++)
 		//printf(" %d\t",ctr[i]);
	// keeping track first index of digits
	for(i=0;i<10;i++)
	{
		for(j=0;j<110;j++)
		{
			if(a[i]==R[j])
			{
				start_index[i]=j;
				break;
			}
		}
	}
    printf("\n\n\n      Null Hypothesis - Ho: The numbers are independent.\n");
	printf("\n      Alternative hypothesis - H1: The numbers are not independent.\n\n\n\n");
    
	for(i =0;i<12;i++)
		{
			Oi[i]= 0;
			RF[i] =float(0);
			SX[i]=float(0);
			D[i]= float(0);
		}
		
	for(i=0;i<10;i++)
	{
		j=start_index[i]+1;
		c=0;
		printf( "\n The gaps of digit: %d\t",i);
		while(j<110)
		{
		  gap=0;	  
		  while(R[j]!=i and j<110)
		     {
		     	gap++;
		     	j++;
		     }
		     
			 c++;
	   if(c<ctr[i]){
	   printf("    %2d",gap);
		 if(gap<=3)
		 	   Oi[0]++;
		  else if(gap<=7)
		   		Oi[1]++;
		  else if(gap<=11)
		   		Oi[2]++;
		  else if(gap<=15)
		   		Oi[3]++;
		  else if(gap<=19)
		       Oi[4]++;
	   		else if(gap<=23)
		   		Oi[5]++;
		   	else if(gap<=27)
		   		Oi[6]++;
     		else if(gap<=31)
		   		Oi[7]++;
		   	else if(gap<=35)
		   		Oi[8]++;
		   	else if(gap<=39)
		   		Oi[9]++;
		   	else if(gap<=43)
		   		Oi[10]++;
		   	else
		   		Oi[11]++;
		}
		  j++;	
		  
	   	}
	   	j=start_index[i]+1;
	}
	
	printf("\n\n\n Finding D-value from sample data:\n");
  for(i=0;i<12;i++)
   {
    
    RF[i]= float(Oi[i])/100;
    FX[i]=1-pow(0.9,x+1);
    
    x=x+4;
   }
   SX[0]= RF[0];
   for(i=1;i<12;i++)
   {
   	 SX[i] = SX[i-1]+RF[i];
     D[i] = fabs(FX[i]-SX[i]);
   }
   
    dmax=D[0];
	for (i=1;i<12;i++)
   {
   	if(dmax<D[i])
   	   { 
   	     dmax=D[i];
   	   }
   }
   D_value = dmax;
   printf( "\n Gap Length\t Frequency\t\t Relative_Frequency\t\t Cumulative Frequency \t  Theoretical Frequency\t D=|F(X)-S(X)|");
    l=0,r=3;
	for (i=0;i<12;i++)
   {
       printf( "\n %d-%d \t\t\t%d \t\t\t%.4f\t\t \t\t%.4f\t\t\t%.4f \t\t %.4f",l,r,Oi[i],RF[i],SX[i],FX[i],D[i]);
        l+=4;r+=4;
   }
   printf("\n\n\n    D-Value = %.4f",D_value);
    
    printf("\n\n\n  Enter the Critical valude of D_Score:"); // D_alpha = 0.136
	scanf("%f", &cr_value);
	if(D_value<cr_value)
	{
		//printf("\n   **************************");
		printf("\n     Hypothesis is Accepted.\n\n\n");
	}
	else
	printf("\nHypothesis is rejected");
	getch();
	return 0;


}

