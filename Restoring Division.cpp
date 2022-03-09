#include<stdio.h>
void displayBits(unsigned int value, int size)
{
	int i=0;
	for(i=0; i<16; i++){
		if(i<(16-size))
			value<<=1;
		else{
			putchar((value&0x8000)?'1':'0');
			value<<=1;
		//	if((i-1)%5==0) putchar(' ');
		}
	}
}

int main()
{
	unsigned int dividend = 9;
	unsigned int divisor = 3;
	unsigned int accumulator=0;
	unsigned int quotient=0;
	int i;
	
	printf("dividend: "); displayBits(dividend,4);printf("\n");
	printf("divisor: "); displayBits(divisor,5);printf("\t");	
	
	quotient=quotient | (dividend & 0x0F); //Update AQ
	printf("\nSC\t");printf("A\tQ\t");printf("  Remarks");printf("\n");
	printf("4\t");displayBits(quotient,9); printf("\t Initialization");printf("\n");
	
	
	for(i=4;i>0;i--)
	{
	
		quotient = (quotient<<1); //Left Shift
		
		printf("%d\t",i-1);displayBits(quotient,9);printf("\tLeft Shift \n");

		accumulator=(quotient>>4) & 0x000f; // Update Accumulator

		accumulator = accumulator - divisor; //A=A-M  
		
		if(accumulator & (1<<4))   // Check sign bit 5th bit
		{
			//printf("%d\t",i-1);displayBits(accumulator,5);printf("\t\tA-M \n");
			quotient = quotient & ~0x01; //Q0=0
			accumulator = accumulator + divisor; //A=A+M  
			
		}
		else 
		{
			quotient = quotient | 0x01; //Q0=1		
			
		}

		quotient= (quotient & 0x0F)|((accumulator & 0x1F)<<4); 
		printf("%d\t",i-1);displayBits(quotient,9);printf("\n");
		
	}
	accumulator=(quotient>>4) & 0x000f;
	printf("Quotient: "); displayBits((quotient & 0xf),4);printf("\n");
	printf("Remainder: "); displayBits(accumulator,5);printf("\t");	
	
}